class Pen:
    p = "Manufracture in Bangladesh!"
    def __init__(self, name, brand, color):
        self.name=name
        self.brand=brand
        self.color = color

obj = Pen('Matador', 'Bashundhara', 'Red')
print(Pen.p)
print(obj.name)
print(obj.brand)
print(obj.color)