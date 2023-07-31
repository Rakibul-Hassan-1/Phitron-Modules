#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>
using namespace std;

void solve()
{

    int numbers[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> numbers[i];
    }
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + size);
    cout << numbers[1] << nl;
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
