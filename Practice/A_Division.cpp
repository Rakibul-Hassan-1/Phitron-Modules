#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int rating;
    cin >> rating;
    if (1900 <= rating)
    {
        cout << "Division 1" << nl;
    }
    else if (1600 <= rating && rating <= 1899)
    {
        cout << "Division 2" << nl;
    }
    else if (1400 <= rating && rating <= 1599)
    {
        cout << "Division 3" << nl;
    }
    else if (rating <= 1399)
    {
        cout << "Division 4" << nl;
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