def sum_of_odd_numbers_between(x, y):
#Ensure x is always less than y
    if x > y:
        x, y = y, x

#Calculate the sum of odd numbers between x and y
    return sum(i for i in range(x+1, y) if i % 2 != 0)

def main():
#Read number of test cases
    T = int(input("Enter number of test cases: "))

#Process each test case
    for _ in range(T):
#Read the two numbers for each test case
        x, y = map(int, input("Enter two numbers separated by space: ").split())

#Print the sum of odd numbers between x and y
        print(sum_of_odd_numbers_between(x, y))

if __name__ == "__main__":
    main()
