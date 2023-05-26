#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int mx = max(a, b);
    int final_max = max(mx, c);
    int mn = min(a, b);
    int final_minimum = min(mn, c);
    cout << final_minimum << " " << final_max;
    return 0;
}
