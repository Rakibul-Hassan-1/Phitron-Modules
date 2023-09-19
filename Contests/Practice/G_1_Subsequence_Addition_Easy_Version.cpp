#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>
using namespace std;
int a[1000], b[1000];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    if (a[1] != 1)
    {
        cout << "NO" << endl;
        return;
    }
    b[1] = a[1];
    int sum = a[1];
    for (int i = 2; i <= n; i++)
    {
        b[i] = sum;
        sum += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
