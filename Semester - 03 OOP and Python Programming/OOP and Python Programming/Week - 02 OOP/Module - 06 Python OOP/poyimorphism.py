# Poly -> many (multiple)
# morph -> shape

from math import pi

class Shape:

    def __init__(self,name) -> None:
        self.name = name

class Rectangle(Shape):

    def __init__(self, name, height, weight) -> None:
        self.height = height
        self.weight = weight
        super().__init__(name)
    
    def area(self):
        ans = self.height*self.weight
        return ans
class Circle(Shape):

    def __init__(self, name, redius) -> None:
        self.redius = redius
        self.name = name
        super().__init__(name)
    
    def area(self):
        ans = pi*self.redius*self.redius
        return ans
    
obj = Circle('Circle', 5)
print(obj.name, obj.redius)


