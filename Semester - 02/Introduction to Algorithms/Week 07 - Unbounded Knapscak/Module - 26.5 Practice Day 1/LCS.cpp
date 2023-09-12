#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int LCM(int n, string s1, int m, string s2)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
    {
        int choice1 = LCM(n - 1, s1, m - 1, s2);
        return dp[n][m] = choice1 + 1;
    }
    else
    {
        int choice1 = LCM(n - 1, s1, m, s2);
        int choice2 = LCM(n, s1, m - 1, s2);
        return dp[n][m] = max(choice1, choice2);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    memset(dp, -1, sizeof(dp));
    if (LCM(n, s1, m, s2))
    {
        cout << LCM(n, s1, m, s2) << endl;
    }
    return 0;
}