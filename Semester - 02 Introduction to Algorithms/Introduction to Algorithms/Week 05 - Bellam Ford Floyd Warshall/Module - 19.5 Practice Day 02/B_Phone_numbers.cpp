#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    // for odd counter
    if (n & 1)
    {
        string s;
        cin >> s;
        cout << s[0] << s[1] << s[2];

        if (s.size() != 3)
        {
            cout << "-";
        }
        for (int i = 3; i < s.size(); i += 2)
        {
            cout << s[i] << s[i + 1];
            if (s.size() - 2 != i)
            {
                cout << "-";
            }
        }
    }
    else
    {
        string s;
        cin >> s;
        cout << s[0] << s[1];

        if (s.size() != 2)
        {
            cout << "-";
        }
        for (int i = 2; i < s.size(); i += 2)
        {
            cout << s[i] << s[i + 1];
            if (s.size() - 2 != i)
            {
                cout << "-";
            }
        }
    }

    return 0;
}
