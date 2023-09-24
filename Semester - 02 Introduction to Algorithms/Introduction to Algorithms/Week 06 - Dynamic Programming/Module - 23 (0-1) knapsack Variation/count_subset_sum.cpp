// #include <bits/stdc++.h>
// using namespace std;

// int subset_sum(int arr[], int n, int sum)
// {
//     // base case
//     if (n == 0)
//     {
//         if (sum == 0)
//             return 1;
//         else
//             return 0;
//     }

//     if (arr[n - 1] <= sum)
//     {
//         int op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
//         int op2 = subset_sum(arr, n - 1, sum);
//         return op1 || op2;
//     }
//     else
//     {
//         return subset_sum(arr, n - 1, sum);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum;
//     cin >> sum;

//     if (subset_sum(arr, n, sum))
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int dp[1005][1005];
// int subset_sum(int arr[], int n, int sum)
// {
//     if (n == 0)
//     {
//         // base case
//         if (sum == 0)
//         {
//             return 1;
//         }
//         else
//             return 0;
//     }

//     if (dp[n][sum] != -1)
//     {
//         return dp[n][sum];
//     }

//     if (arr[n - 1] <= sum)
//     {
//         int op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
//         int op2 = subset_sum(arr, n - 1, sum);
//         return dp[n][sum] = op1 + op2;
//     }
//     else
//     {
//         // return dp[n][sum] = subset_sum(arr, n - 1, sum);
//         return dp[n][sum] = subset_sum(arr, n - 1, sum);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum;
//     cin >> sum;

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= sum; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }

//     cout << subset_sum(arr, n, sum) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int subset_sum(int arr[], int n, int sum)
{
    // base case
    if (n == 0)
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }

    if (arr[n - 1] <= sum)
    {
        int op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
        int op2 = subset_sum(arr, n - 1, sum);
        return dp[n][sum] = op1 + op2;
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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << subset_sum(arr, n, sum) << endl;

    return 0;
}