#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl "\n"
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int num, new_num;
    cin >> num;

    if (num % 7 == 0)
    {
        cout << num << nl;
    }
    else
    {
        new_num = num / 7;
        cout << new_num * 7 << nl;
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
