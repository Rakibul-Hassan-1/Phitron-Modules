#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance ctrl + a
#define pii pair<int, int>
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b <= d && c <= a + d - b)
        {
            cout << (d - b) + (a + d - b - c) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}
