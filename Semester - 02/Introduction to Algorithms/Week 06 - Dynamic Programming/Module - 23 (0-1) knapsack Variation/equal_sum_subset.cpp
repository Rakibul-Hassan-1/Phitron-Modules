#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int count = 0;
bool subset_sum(int arr[], int n, int sum)
{
    if (n == 0)
    {
        // base case
        if (sum == 0)
        {
            return true;
        }
        else
            return false;
    }

    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }

    if (arr[n - 1] <= sum)
    {
        bool op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
        bool op2 = subset_sum(arr, n - 1, sum);
        return dp[n][sum] = op1 || op2;
    }
    else
    {
        return dp[n][sum] = subset_sum(arr, n - 1, sum);
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n + 10; i++)
    {
        for (int j = 0; j < n + 10; j++)
        {
            dp[i][j] = -1;
        }
    }

    bool flag = false;
    if (sum % 2 == 0)
    {
        sum = sum / 2;
        if (subset_sum(arr, n, sum))
            flag = true;
    }

    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int s = 0;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         s += a[i];
//     }
//     if (s % 2 == 0)
//     {
//         int sum = s / 2;
//         bool dp[n + 1][sum + 1];
//         dp[0][0] = true;
//         for (int i = 1; i <= sum; i++)
//             dp[0][i] = false;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 if (a[i - 1] <= j)
//                 {
//                     dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }
//         if (dp[n][sum])
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }