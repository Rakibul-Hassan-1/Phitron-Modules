# class Bank:
    
#     bank_name = "BRAC BANK"

#     def __init__(self, balance):
#         self.balance = balance
#         self.min_Withdraw = 100
#         self.max_Withdraw = 100000
    
 


class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)