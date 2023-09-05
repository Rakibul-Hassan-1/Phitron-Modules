#include <bits/stdc++.h>
using namespace std;

// for every recursion call there create 2 times 0 or 1
// time complexity O(2^N)
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int ans1 = fibo(n - 1);
    int ans2 = fibo(n - 2);
    return ans1 + ans2;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}