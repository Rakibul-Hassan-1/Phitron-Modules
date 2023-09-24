#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int coin_change(int n, int s, int v[])
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }

    if (dp[n][s] != -1)
        return dp[n][s];

    if (s >= v[n - 1])
    {
        int choice1 = coin_change(n, s - v[n - 1], v);
        int choice2 = coin_change(n - 1, s, v);
        return choice1 + choice2;
    }
    else
    {
        return coin_change(n - 1, s, v);
    }
}
int main()
{

    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << coin_change(n, s, v);

    return 0;
}