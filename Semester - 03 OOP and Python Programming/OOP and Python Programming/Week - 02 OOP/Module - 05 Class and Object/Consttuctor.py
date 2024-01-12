class Phone:
    
    manufacture = 'China'

#  Python er constructor hisebe "init" use kora hoy
    def __init__(self, brand, name, price):
        # pass
        # Self holo C++ this keyword er moto
        self.brand = brand
        self.name = name
        self.price = price


    def send_sms(self, number, txt):
        ans = f'SMS sending from {number} and this=> {txt}'
        print(ans)

obj = Phone('Oppo', 'Rakibul Hassan', 12500);
print(obj.manufacture)
print(obj.brand)
print(obj.name)
print(obj.price)