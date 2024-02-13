from Menu import Pizza, Burger,Drinks, Menu
from Restaurant import Restaurant
from User import Chef, Customer, Server, Manager

def main():
    menu = Menu()

    # add Pizza in the menu
    pizza_1 = Pizza('Shutki Pizza', 600, 'Large',['Shutki', 'Onion'] )
    menu.add_menu_item('Pizza', pizza_1)
    pizza_2 = Pizza('Alur Pizza', 400, 'Large', ['Alu', 'Oil'])
    menu.add_menu_item('Pizza', pizza_2)
    pizza_3 = Pizza('Daler Pizza', 200, 'Small', ['Dal', 'Oil'])
    menu.add_menu_item('Pizza', pizza_3)

    # add Burger in the menu
    burger_1 = Burger('Naga Burger', 1000, 'Murgi', ['Bread', 'Chili'])
    menu.add_menu_item('Burger', burger_1)
    burger_2 = Burger('Beaf Burger', 1200, 'Goru', ['Bread', 'Beaf'])
    menu.add_menu_item('Burger', burger_2)
    burger_3 = Burger('Vegatable Burger', 800, 'Seed', ['Bread', 'Letus'])
    menu.add_menu_item('Burger', burger_3)

    # add Drinks in the menu
    coke = Drinks('Coke', 50, True)
    menu.add_menu_item('Drinks', coke)
    coffie = Drinks('Cuppacino', 500, False)
    menu.add_menu_item('Drinks', coffie)

    # Show menu 
    menu.show_menu()

    restaurant = Restaurant("Sahi Babar Restaurent", 2000,menu)

    # add employees
    manager = Manager('Kala Chan Manager', 5, 'kalachanpakhi@gmail.com', 'kaliapur', 1500, 'Jan 1 2024', 'Core')
    restaurant.add_employee('manager', manager)
   
    chef = Chef('Rustam Baburchi', 6, 'cupa@rustam.com', 'Rustam Nagar', 3500, 'Feb 1 2023=4', 'Chef', 'Everything')
    restaurant.add_employee('chef', chef)

    server = Server('Chotu Server', 6, 'nai@jai.com', 'restaurent', 200, 'Mar 1 2024', 'server')
    restaurant.add_employee('server', server)

    # Show employees
    restaurant.show_employees()

    # Customer 
    customer = Customer('Sakib Khan',6, 'sakib@gmai.com', 'banani', 10000)
    
    
if __name__ == '__main__':
    main()