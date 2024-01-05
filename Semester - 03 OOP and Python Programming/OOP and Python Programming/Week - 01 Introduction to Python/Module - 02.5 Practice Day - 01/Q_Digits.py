def main():
    tc = int(input()) 
    for _ in range(tc):
        n = int(input())
        if n==0:
            print(0, end='')
        while n!=0:
            rem = n%10
            n= n//10
            print(rem , end=' ')
        print()

if __name__ == "__main__":
    main()

