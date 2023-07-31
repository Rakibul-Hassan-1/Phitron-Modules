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
    int t, sum = 0;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 0)
    {
        cout << (-1) * sum << nl;
    }
    else
    {
        cout << sum << nl;
    }
}
