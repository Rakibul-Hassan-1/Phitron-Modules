#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    string arr;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    int sum1 = arr[0] + arr[1] + arr[2];
    int sum2 = arr[3] + arr[4] + arr[5];
    if (sum1 == sum2)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
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
