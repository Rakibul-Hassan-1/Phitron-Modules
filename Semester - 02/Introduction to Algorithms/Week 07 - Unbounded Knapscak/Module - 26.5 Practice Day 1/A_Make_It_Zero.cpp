#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n & 1)
    {
        cout << "4" << '\n';
        cout << "1 " << n - 1 << '\n';
        cout << "1 " << n - 1 << '\n';
        cout << n - 1 << ' ' << n << '\n';
        cout << n - 1 << ' ' << n << '\n';
    }
    else
    {
        cout << "2" << '\n';
        cout << "1 " << n << '\n';
        cout << "1 " << n << '\n';
    }
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
