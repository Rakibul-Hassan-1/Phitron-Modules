# Base class/ Common class
class Gedget:
    def __init__(self, name, color, price) -> None:
        self.name = name
        self.color = color 
        self.price = price

    def run(self):
        return f'Running Mobile {self.name}'

class Mobile:

    def __init__(self, dual_sim) -> None:
        # self.name = name
        # self.color = color 
        # self.price = price
        self.dual_sim = dual_sim
    
    # def run(self):
    #     return f'Running Mobile {self.name}'
    def __repr__(self) -> str:
        return f'Camera: {self.dual_sim}'

class Leptop:
    def __init__(self, ssd) -> None:
        # self.name = name
        # self. color = color 
        # self.price = price 
        self. ssd = ssd
    
        
    # def run(self):
    #     return f'Running Leptop {self.name}'

# inheritance
obj = Mobile(True)
print(obj)