def main():
    k, s, x, count = 0, 0, 0, 0
    k, s = map(int, input().split())

    for i in range(k + 1):
        for j in range(k + 1):
            x = s - (i + j)
            if 0 <= x <= k and (x + i + j) == s:
                count += 1
    print(count)

if __name__ == "__main__":
    main()
