#include <iostream>
using namespace std;
bool memo[1005][1005];
bool dp[1005][1005];

bool canReach(int target, int n)
{
    // base case
    if (target == n)
    {
        return true;
    }

    if (target > n)
    {
        return false;
    }

    if (dp[target][n] == -1)
    {
        return memo[target][n];
    }

    dp[target][n] = true;

    bool choice1 = canReach(target * 2, n);
    bool choice2 = canReach(target + 3, n);

    return memo[target][n] = choice1 || choice2;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                dp[i][j] = -1;
            }
        }
        if (canReach(1, n))
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
