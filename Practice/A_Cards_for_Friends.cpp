#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>
using namespace std;

void solve()
{
    int w, h, n;
    cin >> w >> h >> n;
    long long a = 1;
    while (w % 2 == 0)
    {
        a *= 2;
        w /= 2;
    }
    while (h % 2 == 0)
    {
        a *= 2;
        h /= 2;
    }
    if (a >= n)
        cout << "YES\n";
    else
        cout << "NO\n";
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
