from django.shortcuts import render
from django.contrib import messages
from django.views.generic import CreateView,ListView
from django.urls import reverse_lazy
from django.contrib.auth.mixins import LoginRequiredMixin
from .models import Transaction,Bank
from .forms import DepositForm,WithdrawForm,LoanRequestForm,TransferMoneyForm
from .constants import DEPOSIT,WITHDRAWAL,LOAN,LOAN_PAID,Transfer
from django.http import HttpResponse
from datetime import datetime
from django.db.models import Sum
from django.views import View
from django.shortcuts import get_object_or_404, redirect
from accounts.models import UserBankAccount
from django.core.mail import EmailMessage, EmailMultiAlternatives
from django.template.loader import render_to_string
# Create your views here.
# ei view ke inherit kore amra deposite.withdraw,loan request kaj korbo

def send_transaction_email(user,amount,to_user ,subject,template):
   
    message = render_to_string(template,{
           'user': user,
           'amount': amount,
           
            'to_user': to_user
        })
  
    send_email = EmailMultiAlternatives(subject,'',to=[user.email])
    send_email.attach_alternative(message,"text/html")
    send_email.send()



class TransactionCreateMixin(LoginRequiredMixin,CreateView):
    template='transactions/transaction_form.html'
    model=Transaction
    title=''
    success_url=reverse_lazy('transaction_report')

    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs() 
        kwargs.update({
            'account': self.request.user.account
        })
        return kwargs
    def get_context_data(self,**kwargs):
        context= super().get_context_data(**kwargs)
        context.update({
            'title': self.title
        })
        return context

class DepositMoneyView(TransactionCreateMixin):
    form_class= DepositForm
    title="Deposit"

    def get_initial(self):
        initial ={'transaction_type': DEPOSIT}
        return initial

    def form_valid(self,form):
        amount = form.cleaned_data.get('amount')
        account = self.request.user.account
        account.balance +=amount #user er kache ache 500 taka,ami deposit korlam 1000
        #taka taile total balance 1500 taka
        account.save(
            update_fields =['balance']
        )

        messages.success(self.request,f'{amount}$ was deposited to your account successfully')
        # mail_subject= "Deposite Message"
        # message = render_to_string('transactions/deposite_email.html',{
        #    'user': self.request.user,
        #    'amount': amount,
        # })
        # to_email= self.request.user.email
        # send_email = EmailMultiAlternatives(mail_subject,'',to=[to_email])
        # send_email.attach_alternative(message,"text/html")
        # send_email.send()
        # send_transaction_email(self.request.user,amount, "Deposite Message", "transactions/deposite_email.html")
        return super().form_valid(form)

class WithdrawMoneyView(TransactionCreateMixin):
    form_class= WithdrawForm
    title="Withdraw Money"

    def get_initial(self):
        initial ={'transaction_type': WITHDRAWAL}
        return initial

    def form_valid(self,form):
        amount = form.cleaned_data.get('amount')
        account= self.request.user.account
        account.balance -=amount
        if Bank.objects.filter(is_Bankrupt =True).exists():
            messages.error(self.request,f"Sorry The bank is Bankrupt")
            return redirect("transaction_report")
        account.save(
            update_fields =['balance']
          )

        messages.success(
            self.request,
            f'Successfully withdrawn {"{:,.2f}".format(float(amount))}$ from your account'
        )
        # send_transaction_email(self.request.user, amount, "Withdrawal Message", "transactions/withdrawal_email.html")
        return super().form_valid(form)

class LoanRequestView(TransactionCreateMixin):
    form_class = LoanRequestForm
    title = 'Request For Loan'

    def get_initial(self):
        initial = {'transaction_type': LOAN}
        return initial

    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        current_loan_count = Transaction.objects.filter(account = self.request.user.account
        , transaction_type = LOAN , loan_approve= True).count()
       #koyta loan approve hoyeche 
        if current_loan_count >= 3:
            return HttpResponse("You have crossed your limits")
        if Bank.objects.filter(is_Bankrupt =True).exists():
            messages.error(self.request,f"Sorry The bank is Bankrupt")
            return redirect("transaction_report")    
        messages.success(
            self.request,
            f'Loan request for {"{:,.2f}".format(float(amount))}$ submitted successfully'
        )
        # send_transaction_email(self.request.user, amount, "Loan Request Message", "transactions/loan_email.html")
        return super().form_valid(form)  


class TransactionReportView(LoginRequiredMixin,ListView):
    template_name='transactions/transaction_report.html'
    model= Transaction
    balance=0 # filter korar pore ba age amar total balance ke show korbe

    def get_queryset(self):
        #zodi user kono type filter na kore taile tar total 
        #transaction report dekkhabo
        queryset = super().get_queryset().filter(
            account = self.request.user.account
        )
        start_date_str = self.request.GET.get('start_date')
        end_date_str = self.request.GET.get('end_date')

        if start_date_str and end_date_str:
            start_date = datetime.strptime(start_date_str,"%Y-%m-%d").date()
            end_date = datetime.strptime(end_date_str, "%Y-%m-%d").date()
          #zodi user filter korte cay
          #transaction.objcets..get(account = self.request.user.account)
            queryset = queryset.filter(timestamp__date__gte = start_date , timestamp__date__lte = end_date)
            self.balance = Transaction.objects.filter(timestamp__date__gte = start_date , timestamp__date__lte = end_date).aggregate(Sum('amount'))
            ['amount__sum']
            #geater than ,less than
        else:
            self.balance = self.request.user.account.balance
        return queryset.distinct()   # unique queryset hote hobe   
    def get_context_data(self,**kwargs):
        context= super().get_context_data(**kwargs)
        context.update({
            'account': self.request.user.account
        })  
        return context     


class PayLoanView(LoginRequiredMixin, View):
    def get(self,request,loan_id):
        loan= get_object_or_404(Transaction,id=loan_id)

        if loan.loan_approve: #ekjon user loan pay korte parbe tokhoni zokhon tar loan approve hobe
            user_account = loan.account
            if loan.amount < user_account.balance:
                user_account.balance -=loan.amount
                loan.balance_after_transaction =  user_account.balance
                user_account.save()
                loan.transaction_type = LOAN_PAID
                loan.save()
                return redirect('loan_list')
            else:
                messages.error(self.request,f"loan amount  is greater than available balance")
                return redirect('loan_list')   




class LoanListView(LoginRequiredMixin,ListView):
    model = Transaction
    template_name = 'transactions/loan_request.html'
    context_object_name = 'loans' # loan list ta ei loans context er moddhe thakbe

    def get_queryset(self):
        user_account = self.request.user.account

        queryset = Transaction.objects.filter(account = user_account,transaction_type= LOAN)
        return queryset




# class TransferMoneyView(TransactionCreateMixin):
#     form_class = TransferMoneyForm
#     title = 'Transfer Money'

#     def get_initial(self):
#         initial = {'transaction_type': Transfer}
#         return initial

#     def form_valid(self,form):
#         amount = form.cleaned_data.get('amount')
#         receiver_account = form.cleaned_data.get('receiver_account_no ')
        
#         transfer_account= UserBankAccount.objects.get(account_no= receiver_account)
       
#         self.request.user.account.balance -= amount
#         transfer_account.balance +=amount
#         print(transfer_account.account_no)
        
#         self.request.user.account.save(
#             update_fields =['balance']
#           )  

#         transfer_account.save(
#             update_fields =['balance']
#           )
        

#         messages.success(
#             self.request,
#             f'Successfully transfered {"{:,.2f}".format(float(amount))}$ from your account'
#         )

#         return super().form_valid(form)    



class TransferMoneyView(TransactionCreateMixin):
    form_class = TransferMoneyForm
    title = 'Transfer Money'

    def get_initial(self):
        initial = {'transaction_type': Transfer}
        return initial

    def form_valid(self,form):
        amount = form.cleaned_data.get('amount')
        receiver_account = form.cleaned_data.get('receiver_account_no')
        try:
            transfer_account= UserBankAccount.objects.get(account_no= receiver_account)
        except UserBankAccount.DoesNotExist:
            messages.error(self.request, 'Receiver account not found.')
            return self.form_invalid(form)
            
        self.request.user.account.balance -= amount
        transfer_account.balance +=amount
        print(transfer_account.account_no)
        
        self.request.user.account.save(
            update_fields =['balance']
          )  

        transfer_account.save(
            update_fields =['balance']
          )
        

        messages.success(
            self.request,
            f'Successfully transfered {"{:,.2f}".format(float(amount))}$ from your account'
        )
        send_transaction_email(self.request.user,amount, transfer_account.user,"Transfer Message", "transactions/transfer_email.html")
        
        send_transaction_email(transfer_account.user,amount, self.request.user, "Transfer Message", "transactions/receiver_email.html")
       
        return super().form_valid(form)    



