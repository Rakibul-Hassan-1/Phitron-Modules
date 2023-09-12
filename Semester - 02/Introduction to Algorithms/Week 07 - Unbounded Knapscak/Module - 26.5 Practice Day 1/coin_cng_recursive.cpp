#include <bits/stdc++.h>
using namespace std;
int memo[1005][1005];
int coinChangeRecursive(int w[], int n, int s)
{
    // Base cases
    if (s == 0)
        return 0;
    if (n == 0)
        return INT_MAX - 1;

    if (memo[n][s] != -1)
        return memo[n][s];

    if (w[n - 1] <= s)
    {
        int includeCoin = 1 + coinChangeRecursive(w, n, s - w[n - 1]);
        int excludeCoin = coinChangeRecursive(w, n - 1, s);
        return memo[n][s] = min(includeCoin, excludeCoin);
    }
    else
    {
        return memo[n][s] = coinChangeRecursive(w, n - 1, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    int s;
    cin >> s;

    memset(memo, -1, sizeof(memo));

    int result = coinChangeRecursive(w, n, s);
    if (result == INT_MAX - 1)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}
