#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, mx;
        cin >> n >> k >> mx;

        if (k > n || k > mx + 1)
        {
            cout << -1 << "\n";
            continue;
        }

        int x = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (x == k)
                x = mx;
            if (x > mx)
                x = mx;
            if (x == k)
                x--;

            ans += x;

            x++;
        }

        cout << ans << "\n";
    }
}
