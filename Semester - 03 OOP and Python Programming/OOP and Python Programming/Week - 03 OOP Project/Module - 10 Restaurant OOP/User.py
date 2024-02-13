from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name, phone, email, adderss) -> None:
        self.name = name 
        self.phone = phone
        self.email = email
        self.adderss = adderss

class Customer(User):
    def __init__(self, name,phone, email, adderss, money) -> None:
        self.wallet = money
        self.__order = None
        super().__init__(name, phone, email, adderss,)

    @property
    def order(self):
        return self.__order
  
    @order.setter
    def order(self, order):
        self.__order = order
    
    def place_order(self, order):
        self.order = order
        print(f'{self.name} placed an order {order.items}')
    
    def eat_food(self, order):
        print(f'{self.name} item food {order.items}')
    
    def pay_for_order(self, amount):
        pass
    
    def give_tips(self, tips_money):
        pass
    
    def write_review(self, stars):
        pass

class Employee(User):
    def __init__(self, name,phone, email, adderss, salary, starting_date,department) -> None:
        super().__init__(name, phone, email, adderss)
        self.salary = salary
        self.due = salary
        self.starting_date = starting_date
        self.department = department
    
    def receve_salary(self):
        self.due = 0

class Chef(Employee):
    def __init__(self, name, phone, email, adderss, salary, starting_date, department, cooking_item) -> None:
        super().__init__(name, phone, email, adderss, salary, starting_date, department)
        self.cooking_item = cooking_item
class Server(Employee):

    def __init__(self, name, phone, email, adderss, salary, starting_date, department) -> None:
        self.tips_earning = 0
        super().__init__(name, phone, email, adderss, salary, starting_date, department)
    
    def take_order(self, order):
        pass
    def transfer_order(self, order):
        pass
    def serve_food(self, order):
        pass
    def receive_tips(self, amount):
        self.tips_earning+=amount

class Manager(Employee):
    def __init__(self, name, phone, email, adderss, salary, starting_date, department) -> None:
        super().__init__(name, phone, email, adderss, salary, starting_date, department)

