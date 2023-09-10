#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbound_knapscak(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];
    

    if (s >= w[n - 1])
    {
        int choice1 = v[n - 1] + unbound_knapscak(n, s - w[n - 1], v, w);
        int choice2 = unbound_knapscak(n - 1, s, v, w);
        return max(choice1, choice2);
    }
    else
    {
        return unbound_knapscak(n - 1, s, v, w);
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
        w[i] = i + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << w[i] << " ";
    // }
    cout << unbound_knapscak(n, n, v, w);

    return 0;
}