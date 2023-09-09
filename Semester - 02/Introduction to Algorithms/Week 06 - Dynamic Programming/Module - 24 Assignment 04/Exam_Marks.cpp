#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool solve(int m, vector<int> &marks, int i)
{
    // Base cases
    if (m == 1000)
        return true;
    if (i == marks.size() || m > 1000)
        return false;

    if (dp[m][i] != -1)
        return dp[m][i];

    bool op1 = solve(m + marks[i], marks, i + 1);
    bool op2 = solve(m, marks, i + 1);

    return dp[m][i] = op1 || op2;
}

int main()
{
    int t, n, m;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vector<int> marks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> marks[i];
        }

        for (int i = 0; i <= 1000; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (solve(m, marks, 0))
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
