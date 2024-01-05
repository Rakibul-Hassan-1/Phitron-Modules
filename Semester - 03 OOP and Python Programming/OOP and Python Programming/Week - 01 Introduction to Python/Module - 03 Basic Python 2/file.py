# with open("Masage.txt", 'w') as file:
#     file.write("I love python, it's really fun")

# with open("Masage.txt", 'a') as file:    
#     file.write("I love python, it's really fun \n")

with open("Masage.txt", 'r') as file:
    text = file.read()
    print(text)