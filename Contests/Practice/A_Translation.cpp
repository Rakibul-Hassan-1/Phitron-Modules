#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, s1;
    cin >> s >> s1;

    reverse(s.begin(), s.end());

    if (s == s1)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
}
