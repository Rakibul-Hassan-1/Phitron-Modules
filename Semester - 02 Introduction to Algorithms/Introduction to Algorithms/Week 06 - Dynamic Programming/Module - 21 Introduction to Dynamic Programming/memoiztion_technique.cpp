#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 10;
ll save[N];
ll fibo(ll n)
{
    if (n == 0 || n == 1)
        return 1;

    if (save[n] != -1)
    {
        return save[n];
    }
    ll ans1 = fibo(n - 1);
    ll ans2 = fibo(n - 2);
    save[n] = ans1 + ans2;
    return save[n];
}
int main()
{

    ll n;
    cin >> n;
    for (ll i = 0; i <= n; i++)
    {
        save[i] = -1;
    }

    cout << fibo(n);

    return 0;
}