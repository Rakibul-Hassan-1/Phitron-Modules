def main():
    # tc = int(input()) 
    # for _ in range(tc):
    n = int(input())
    v = list(map(int, input().split()))
    for i in range(n):
        if v[i] % 2 != 0:
            print(0)
            return
    c = 0
    while 1:
        all_even = 1
        for i in range(n):
            if v[i] % 2 == 0:
                v[i] //= 2
            else:
                all_even = False
                break
        if not all_even:
            break
        c += 1
    print(c)

if __name__ == "__main__":
    main()

