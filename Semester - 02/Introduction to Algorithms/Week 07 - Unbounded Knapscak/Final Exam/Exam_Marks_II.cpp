#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

bool coin_change(int n, int target_value, int v[])
{
    if (n == 0)
    {
        if (target_value == 0)
            return true;
        else
            return false;
    }

    if (dp[n][target_value] != -1)
        return dp[n][target_value];

    bool choice1 = false, choice2 = false;

    if (target_value >= v[n - 1])
    {
        choice1 = coin_change(n, target_value - v[n - 1], v);
    }

    choice2 = coin_change(n - 1, target_value, v);

    dp[n][target_value] = choice1 || choice2;

    return dp[n][target_value];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, value;
        cin >> n >> value;
        int target_value = 1000 - value;

        int v[n], w[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= target_value; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (coin_change(n, target_value, v))
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
