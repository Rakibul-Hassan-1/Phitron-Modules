#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    long long int sum = x + y, dif = x - y, mul = x * y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << dif << endl;

    return 0;
}
