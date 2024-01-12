class Bank:
    def __init__(self, holder_name, initial_balance) -> None:
        self.holder_name = holder_name # Public
        self.__balance = initial_balance # Private
    
    def deposit(self, amount):
       self.__balance+=amount
    def get_balance(self):
        return self.__balance
    
rakib = Bank('Rakibul Hassan', 10000)
print(rakib.holder_name)
rakib.deposit(20000)
print(rakib.get_balance())

