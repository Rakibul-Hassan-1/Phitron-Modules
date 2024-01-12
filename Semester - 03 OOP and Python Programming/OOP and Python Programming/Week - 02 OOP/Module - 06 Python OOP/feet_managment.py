# Ena poribahan

class Company:

    def __init__(self, name, address) -> None:
       self.name = name
       self.address = address
       self.bus = [] 
       self.driver = [] 
       self.counter = [] 
       self.manager = [] 
       self.supervisor = []

class Driver:
     
    def __init__(self, name, licence, age, record) -> None:
        self.name= name
        self.licence = licence
        self.age = age
        self.record = record
class Counter:

    def buy_ticket(self, start, destination):
        pass
    

