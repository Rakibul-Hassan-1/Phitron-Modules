#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, cnt = 0;
    cin >> n;
    string s;
    while (n)
    {
        s = to_string(n);
        sort(s.begin(), s.end());
        i = (int)s[s.length() - 1] - '0';
        n -= i;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}