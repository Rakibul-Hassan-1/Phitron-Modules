#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int value = arr[0];

    for (int i = 0; i < n; i++)
    {
        value = max(value, arr[i]);
    }

    cout << value;
    return 0;
}
