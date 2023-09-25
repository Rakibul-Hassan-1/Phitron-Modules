#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int subset_sum(vector<int> &arr, int s1)
{
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(s1 + 1, 0));


    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]) % MOD;
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][s1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if ((target + sum) % 2 != 0 || sum < target)
        {
            cout << 0 << endl;
            continue;
        }

        int s1 = (target + sum) / 2;
        cout << subset_sum(arr, s1) << endl;
    }
    return 0;
}
