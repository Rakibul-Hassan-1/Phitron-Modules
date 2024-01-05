def main():
    tc = int(input()) 
    for _ in range(tc):
        x, y = map(int, input().split())
        odd, a, b, i = 0, 0, 0, 0
        if x > y:
            a = y
            b = x
        else:
            a = x
            b = y
        res = a
        while a <= b:
            if a >= res and a <= b:
                if a % 2 != 0 and a != res and a != b:
                    odd += a
                a += 1
        print(odd)
if __name__ == "__main__":
    main()
