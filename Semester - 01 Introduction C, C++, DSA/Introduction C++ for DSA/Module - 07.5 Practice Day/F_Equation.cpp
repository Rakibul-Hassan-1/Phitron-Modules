#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n;
    cin >> x >> n;
    long long sum = 0;

    for (long long int i = 2; i <= n; i += 2)
    {
        sum += pow(x * 1.0, i * 1.0);
    }
    cout << sum;

    return 0;
}