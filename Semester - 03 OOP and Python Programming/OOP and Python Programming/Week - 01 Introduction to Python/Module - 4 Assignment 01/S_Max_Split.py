def main():
    # tc = int(input()) 
    # for _ in range(tc):
    s = input()
    n = len(s)
    ans = ""
    arr = []
    l , r ,index = 0, 0,0
    for i in range(n):
        if s[i] == 'L':
            l += 1
        else:
            r += 1
        ans += s[i]
        if l == r:
            arr.append(ans)
            ans = ""
            index += 1
            l = 0
            r = 0
    print(index)
    for ch in arr:
        print(ch)

if __name__ == "__main__":
    main()

