# Instructions ===>
# Create a Product class and a Shop class.
# Inside the Shop class, create a method name add_product which adds products using the Product class to the Shop class.
# Inside the Shop class, create a method name buy_product which is used to buy a product and check whether 
# this product is available or not. If you successfully buy a product, then throw a Congress message.

class Product:
    def __init__(self, name, quantity):
        self.name = name.upper()
        self.quantity = quantity

class Shop:
    def __init__(self):
        self.products = {}  # Dictionary for store products

    def add_product(self, product, quantity):
        # Adds a product to the obj. If it already exists, update the quantity.
        if product.name in self.products:
            self.products[product.name].quantity += quantity
        else:
            self.products[product.name] = Product(product.name, quantity)

    def buy_product(self, product_name):
        # Buys a product if available. 
        s = product_name
        product_name = s.upper() 
        print("=>",product_name)
        if product_name in self.products and self.products[product_name].quantity > 0:
            self.products[product_name].quantity -= 1
            return "Congratulations! You have successfully bought the product."
        else:
            print("Sorry, this product is not available. Available products are: ")
            for p in self.products:
                print(p, end=" ")

        
# Example:
obj = Shop()
product1 = Product("Apple", 10)
product2 = Product("Banana", 20)
product3 = Product("Lemon", 30)

# Add products to the obj
obj.add_product(product1, 10)
obj.add_product(product2, 20)
obj.add_product(product3, 30)

# Buy a product
n = input()
buy_message = obj.buy_product(n)

# Outputs: Congratulations! You have successfully bought the product.
print(buy_message)  
