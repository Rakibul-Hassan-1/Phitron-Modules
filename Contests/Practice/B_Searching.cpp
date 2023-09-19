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
    int i = 0, t, key, count = 0;
    cin >> t;
    int arr[t];
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    for (i = 0; i < t; i++)
    {
        if (arr[i] == key)
        {
            cout << i << nl;
            break;
        }
    }
    if (i == t)
    {
        cout << "-1" << nl;
    }
}
