#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

bool check_column(const vector<string> &carpet, int col, char ch)
{
    for (int i = 0; i < carpet.size(); i++)
    {
        if (carpet[i][col] == ch)
        {
            return true;
        }
    }
    return false;
}

bool vika_likes(const vector<string> &carpet)
{
    int m = carpet[0].size();
    for (int i = 0; i < m; i++)
    {
        if (check_column(carpet, i, 'v'))
        {
            for (int j = i + 1; j < m; j++)
            {
                if (check_column(carpet, j, 'i'))
                {
                    for (int k = j + 1; k < m; k++)
                    {
                        if (check_column(carpet, k, 'k'))
                        {
                            for (int l = k + 1; l < m; l++)
                            {
                                if (check_column(carpet, l, 'a'))
                                {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
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
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        for (int i = 0; i < n; i++)
        {
            cin >> carpet[i];
        }
        if (vika_likes(carpet))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
