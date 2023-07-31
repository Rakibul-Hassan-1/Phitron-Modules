#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;
int a, b, draw = 0, chris = 0, mishka = 0;
void solve()
{

    cin >> a >> b;

    if (a > b)
    {
        mishka++;
    }
    else if (a < b)
    {
        chris++;
    }
    else
    {
        draw++;
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
    if (mishka > chris)
    {
        cout << "Mishka"
             << "\n";
    }
    else if (mishka < chris)
    {
        cout << "Chris"
             << "\n";
    }
    else
    {
        cout << "Friendship is magic!^^"
             << "\n";
    }
}
