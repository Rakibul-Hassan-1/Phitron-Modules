from abc import ABC, abstractmethod
# 'ABC' stend for -> "Abstract Base Class"

class Animal(ABC):

    @abstractmethod # 'eat' method ta Dog class a use korar jonno enforce korteche
    def eat(self):
        print("Hello, I am Cow!")
    
    @abstractmethod # 'move' method ta Dog class a use korar jonno enforce korteche
    def move(self):
        pass

class Dog(Animal):
    def __init__(self, name) -> None:
        self.name = name
        super().__init__()

    def eat():
        pass
    def move():
        pass

tommy = Dog('Tommy')
print(tommy.name)