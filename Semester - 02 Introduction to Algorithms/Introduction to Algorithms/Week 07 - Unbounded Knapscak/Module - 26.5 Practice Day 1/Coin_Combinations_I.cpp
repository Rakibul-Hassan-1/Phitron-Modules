#include <bits/stdc++.h>
using namespace std;
int memo[1005][1005];
int coinChangeRecursive(int arr[], int n, int s)
{
    // Base cases
    if (s == 0)
        return 0;
    if (n == 0)
        return INT_MAX - 1;

    if (memo[n][s] != -1)
        return memo[n][s];

    if (arr[n - 1] <= s)
    {
        int choice1 = 1 + coinChangeRecursive(arr, n, s - arr[n - 1]);
        int choice2 = coinChangeRecursive(arr, n - 1, s);
        return memo[n][s] = min(choice1, choice2);
    }
    else
    {
        return memo[n][s] = coinChangeRecursive(arr, n - 1, s);
    }
}

int main()
{
    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    memset(memo, -1, sizeof(memo));

    int result = coinChangeRecursive(arr, n, s);
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
