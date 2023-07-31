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

    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "#";
            }
            cout << "\n";
        }
        else if (i % 2 == 0 && i % 4 != 0)
        {
            for (int j = 0; j < b - 1; j++)
            {
                cout << ".";
            }
            cout << "#"
                 << "\n";
        }
        else
        {
            cout << "#";
            for (int j = 0; j < b - 1; j++)
            {
                cout << ".";
            }
            cout << "\n";
        }
    }
}
