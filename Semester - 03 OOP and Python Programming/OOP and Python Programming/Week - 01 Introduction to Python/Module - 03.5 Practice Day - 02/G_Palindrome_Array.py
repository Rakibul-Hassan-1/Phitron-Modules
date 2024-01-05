def is_palindrome(arr):
    return arr == arr[::-1]
n = int(input())
arr = list(map(int, input().split()))
if is_palindrome(arr):
    print("YES")
else:
    print("NO")
