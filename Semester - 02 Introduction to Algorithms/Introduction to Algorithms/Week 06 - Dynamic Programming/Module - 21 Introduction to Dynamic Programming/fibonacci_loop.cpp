#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    long long arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for (long long i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n];

    return 0;
}