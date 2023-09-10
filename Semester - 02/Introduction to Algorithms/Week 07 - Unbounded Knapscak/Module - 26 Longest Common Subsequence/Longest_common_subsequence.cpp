// longest common subsequence problem for string comparison.
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int LCS(int n, int m, string a, string b)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (a[n - 1] == b[n - 1])
    {
        int ans1 = LCS(n - 1, m - 1, a, b);
        return dp[n][m] = ans1 + 1;
    }
    else
    {
        int ans1 = LCS(n - 1, m, a, b);
        int ans2 = LCS(n, m - 1, a, b);
        return dp[n][m] = max(ans1, ans2);
    }
}

int main()
{

    string a, b;
    cin >> a >> b;

    // aulterate of this for loops
    // for (int i = 0; i <= a.size(); i++)
    // {
    //     for (int j = 0; j <= b.size(); j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }
    memset(dp, -1, sizeof(dp));

    cout << LCS(a.size(), b.size(), a, b);

    return 0;
}