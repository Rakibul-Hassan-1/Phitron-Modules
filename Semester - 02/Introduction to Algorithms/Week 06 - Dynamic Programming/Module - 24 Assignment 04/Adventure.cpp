#include <bits/stdc++.h>
using namespace std;

int solve(int n, int w, int weights[], int values[])
{
    int dp[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (weights[i - 1] <= j)
            {
                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][w];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int weights[n], values[n];

        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> values[i];
        }

        cout << solve(n, w, weights, values) << endl;
    }

    return 0;
}
