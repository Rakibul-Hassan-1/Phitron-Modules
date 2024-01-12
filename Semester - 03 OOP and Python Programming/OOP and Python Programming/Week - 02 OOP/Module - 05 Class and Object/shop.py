class Shop:
    items = [] # iteam are class attribute

    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.items.append(item)

obj_Rakib = Shop('Rakibul Hassan')
obj_Rakib.add_to_cart('Juta') 
obj_Rakib.add_to_cart('Panjabi') 
obj_Rakib.add_to_cart('Pant')

print(obj_Rakib.items)

obj_Akif = Shop('Akif Shahariar')
obj_Akif.add_to_cart('Lungi')
obj_Akif.add_to_cart('Belt')
obj_Akif.add_to_cart('Ghori')

print(obj_Akif.items)
