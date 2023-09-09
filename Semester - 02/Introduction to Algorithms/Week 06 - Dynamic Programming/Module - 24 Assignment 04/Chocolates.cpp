// #include <bits/stdc++.h>
// using namespace std;

// bool solve(int arr[], int n, int sum)
// {
//     // Base cases
//     if (sum == 0)
//         return true;
//     if (n == 0)
//         return false;

//     if (arr[n - 1] > sum)
//         return solve(arr, n - 1, sum);

//     return solve(arr, n - 1, sum - arr[n - 1]) || solve(arr, n - 1, sum);
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int sum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             sum += arr[i];
//         }

//         if (sum % 2 != 0)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             if (solve(arr, n, sum / 2))
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n, int sum)
{
    bool dp[1005][1005];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }
    
    for (int j = 1; j <= sum; j++)
    {
        dp[0][j] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][sum];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
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

        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (solve(arr, n, sum / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
