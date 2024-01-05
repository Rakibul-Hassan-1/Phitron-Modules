#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMaxPoints(vector<int> &points, int k)
{
    int n = points.size();
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

            int left = i - j;
            if (left >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[left][j - 1] + points[i - 1] * points[left]);
            }
        }
    }

    return dp[n][k];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> points(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> points[i];
        }

        int k;
        cin >> k;

        int result = getMaxPoints(points, k);
        cout << result << endl;
    }

    return 0;
}
