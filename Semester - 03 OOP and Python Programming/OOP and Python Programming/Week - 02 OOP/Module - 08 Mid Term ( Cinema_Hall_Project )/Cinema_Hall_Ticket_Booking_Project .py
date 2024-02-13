# Cinema_Hall_Ticket_Booking_Project 

class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall):
        self.hall_list.append(hall)

class Hall:
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        Star_Cinema().entry_hall(self)

    def entry_show(self, id, movie_name, time):
        self.__show_list.append((id, movie_name, time))
        self.__seats[id] = [["free" for _ in range(self.__cols)] for _ in range(self.__rows)]

    def book_seats(self, id, seat_list):
        if id not in self.__seats:
            raise ValueError("Invalid show ID")

        for row, col in seat_list:
            if not (0 <= row < self.__rows and 0 <= col < self.__cols):
                raise ValueError("Invalid seat position")
            if self.__seats[id][row][col] == "booked":
                raise ValueError("Seat already booked")
            self.__seats[id][row][col] = "booked"

    def view_show_list(self):
        return self.__show_list

    def view_available_seats(self, id):
        if id not in self.__seats:
            raise ValueError("Invalid show ID")
        return [[col for col in range(self.__cols) if self.__seats[id][row][col] == "free"] for row in range(self.__rows)]


def main_menu():
    star_cinema = Star_Cinema()

    while True:
        print("\nWelcome to Star Cinema")
        print("1. Create a new hall")
        print("2. Add a show to a hall")
        print("3. Book seats for a show")
        print("4. View all shows in a hall")
        print("5. View available seats for a show")
        print("6. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            rows = int(input("Enter number of rows in hall: "))
            cols = int(input("Enter number of columns in hall: "))
            hall_no = int(input("Enter hall number: "))
            star_cinema.entry_hall(Hall(rows, cols, hall_no))
            print("Hall created successfully!")

        elif choice == "2":
            hall_no = int(input("Enter hall number: "))
            if 1 <= hall_no <= len(star_cinema.hall_list):
                id = input("Enter show ID: ")
                movie_name = input("Enter movie name: ")
                time = input("Enter show time: ")
                star_cinema.hall_list[hall_no - 1].entry_show(id, movie_name, time)
                print("Show added successfully!")
            else:
                print("No Hall Number Availabe with this Number. Please try again.")

        elif choice == "3":
            hall_no = int(input("Enter hall number: "))
            if 1 <= hall_no <= len(star_cinema.hall_list):
                id = input("Enter show ID: ")
                if id in [show[0] for show in star_cinema.hall_list[hall_no - 1].view_show_list()]:
                    num_seats = int(input("How many seats do you want to book? "))
                    seats_to_book = []
                    for _ in range(num_seats):
                        row, col = map(int, input("Enter row and column number for seat (separated by space): ").split())
                        seats_to_book.append((row, col))
                    try:
                        star_cinema.hall_list[hall_no - 1].book_seats(id, seats_to_book)
                        print("Seats booked successfully!")
                    except ValueError as e:
                        print(f"Error: {e}")
                else:
                    print("No Show ID Availabe with this ID. Please try again.")
            else:
                print("No Hall Number Availabe with this Number. Please try again.")

        elif choice == "4":
            hall_no = int(input("Enter hall number: "))
            if 1 <= hall_no <= len(star_cinema.hall_list):
                shows = star_cinema.hall_list[hall_no - 1].view_show_list()
                for show in shows:
                    print(show)
            else:
                print("No Hall Number Availabe with this Number. Please try again.")

        elif choice == "5":
            hall_no = int(input("Enter hall number: "))
            if 1 <= hall_no <= len(star_cinema.hall_list):
                id = input("Enter show ID: ")
                try:
                    available_seats = star_cinema.hall_list[hall_no - 1].view_available_seats(id)
                    print("Available seats:")
                    for row in available_seats:
                        print(row)
                except ValueError as e:
                    print(f"Error: {e}")
            else:
                print("No Hall Number Availabe with this Number. Please try again.")

        elif choice == "6":
            break
        else:
            print("Invalid hoice. Please try again.")

if __name__ == "__main__":
    main_menu()
