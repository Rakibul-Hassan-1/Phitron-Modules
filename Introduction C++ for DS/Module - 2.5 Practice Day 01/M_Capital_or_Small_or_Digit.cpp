#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s;
    cin >> s;
    if (s >= 65 && s <= 90)
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else if (s >= 97 && s <= 122)
    {
        cout << "ALPHA\nIS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    return 0;
}
