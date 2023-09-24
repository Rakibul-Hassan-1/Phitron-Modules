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
    string s;
    cin >> s;
    int length = n;

    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
            break;

        if (s[i] == '0' && s[n - i - 1] == '1')
        {
            length -= 2;
        }
        else if (s[i] == '1' && s[n - i - 1] == '0')
        {
            length -= 2;
        }
        else
        {
            break;
        }
    }

    cout << length << "\n";
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
