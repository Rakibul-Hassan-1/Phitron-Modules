class Calculator:
    brand = 'Casio 998 Plus'
    def add(self,num1, num2):
        return num1+num2
    def deduce(self, num1, num2):
        return num1-num2
    def multi(self, num1, num2):
        return num1*num2
    def div(self, num1, num2):
        return num1/num2

# Creating an Object  
obj = Calculator()

# Input from user
num1, num2 = map(int, input().split())

print('Summation: ',obj.add(num1, num2))
print('Deduce: ',obj.deduce(num1, num2))
print('Multipication: ',obj.multi(num1, num2))
print('Division: ',obj.div(num1, num2))