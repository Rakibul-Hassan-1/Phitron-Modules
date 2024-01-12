# def number():
#     print('01812346535')

# Pyhton a jokhon class er moddhe function add kora lagbe tokhn defalut perameter hisebe 'self' pass korte hobe, self holo first instance
class Phone:
    name = 'Nokia'
    price = 10000
    color = 'Blue'
    features = ['Call', 'Gaming', 'Striming']
    def number(self):
        print("Calling a person")
    def send_sms(self, number, sms):
        txt = f'Sending this {number} to Text {sms}'
        return txt
    
phone_obj = Phone()
print(phone_obj.features)
phone_obj.number()
print(phone_obj.send_sms(123, 'osam'))