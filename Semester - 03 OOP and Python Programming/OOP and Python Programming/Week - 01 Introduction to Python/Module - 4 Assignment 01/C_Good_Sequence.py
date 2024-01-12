def main():
    n = int(input())
    arr = list(map(int, input().split()))
    mp = {}
    for x in arr:
        if x in mp:
            mp[x] += 1
        else:
            mp[x] = 1
    cnt = 0
    for x in mp:
        if mp[x] >= x:
            cnt += mp[x] - x
        else:
            cnt += mp[x]
    print(cnt)

if __name__ == "__main__":
    main()
