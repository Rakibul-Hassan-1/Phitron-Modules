from django import forms
from .models import Transaction
from accounts.models import UserBankAccount
class TransactionForm(forms.ModelForm):
    class Meta:
        model=Transaction
        fields=['amount','transaction_type']

    # transaction type off
    def __init__(self,*args,**kwargs): #form er object create hobe
        self.account = kwargs.pop('account')
        super().__init__(*args,**kwargs)    

        self.fields['transaction_type'].disabled = True #e field disable thakbe
        self.fields['transaction_type'].widget = forms.HiddenInput()
        #user er theke hide kora thakbe
    def save(self,commit=True):
        self.instance.account = self.account
            #  ze user request kortese
        self.instance.balance_after_transaction = self.account.balance 
        #0->5000
        return super().save()    

class DepositForm(TransactionForm):
    def clean_amount(self): #built in function,amount field ke filter korbo
        min_deposit_amount = 100
        amount= self.cleaned_data.get('amount') #user er fill up korar form theke
        # amra amount field er value ke niye aslam
        if amount < min_deposit_amount:
            raise forms.validationError(
                f'you need to deposit at least {min_deposit_amount} $'
            )
        return amount    


class WithdrawForm(TransactionForm):

    def clean_amount(self):
        account = self.account
        min_withdraw_amount = 500
        max_withdraw_amount = 20000
        balance = account.balance # 1000
        amount = self.cleaned_data.get('amount')
        if amount < min_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at least {min_withdraw_amount} $'
            )

        if amount > max_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at most {max_withdraw_amount} $'
            )

        if amount > balance: # amount = 5000, tar balance ache 200
            raise forms.ValidationError(
                f'You have {balance} $ in your account. '
                'You can not withdraw more than your account balance'
            )

        return amount

class LoanRequestForm(TransactionForm):
    def clean_amount(self):
        amount = self.cleaned_data.get('amount')

        return amount

class TransferMoneyForm(TransactionForm):
    receiver_account_no = forms.IntegerField()

    def clean_receiver_account_no(self):
        receiver_account = self.cleaned_data.get('receiver_account_no')
        data= UserBankAccount.objects.filter(account_no= receiver_account).exists()

        if not data:
            raise forms.ValidationError(
                f'Account does not exist'
            )

        return receiver_account

    def clean_amount(self):
        account = self.account
        min_transfer_amount = 500
        max_transfer_amount = 20000
        balance = account.balance # 1000
        amount = self.cleaned_data.get('amount')
        if amount < min_transfer_amount:
            raise forms.ValidationError(
                f'You can transfer at least {min_transfer_amount} $'
            )

        if amount > max_transfer_amount :
            raise forms.ValidationError(
                f'You can transfer at most {max_transfer_amount} $'
            )

        if amount > balance: # amount = 5000, tar balance ache 200
            raise forms.ValidationError(
                f'You have {balance} $ in your account. '
                'You can not transfer more than your account balance'
            )

        return amount    




 