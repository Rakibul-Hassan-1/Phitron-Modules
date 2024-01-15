def timer(a):
    def inner():
        print("Hello Start!")
        print(a)
        print("Hello End!")
    return inner

# timer()()

@timer
def factorial():
    print("Get Factorial!")

factorial()