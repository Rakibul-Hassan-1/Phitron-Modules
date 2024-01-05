def main():
    # tc = int(input()) 
    # for _ in range(tc):
    x, n = map(int, input().split())
    sum =0
    for i in range(2, n+1, 2):
        sum+=pow(x*1.0, i*1.0)
    print(int(sum))
if __name__ == "__main__":
    main()

