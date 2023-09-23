// #include <bits/stdc++.h>
// using namespace std;

// bool subset_sum(int arr[], int n, int sum)
// {
//     // base case
//     if (n == 0)
//     {
//         if (sum == 0)
//             return true;
//         else
//             return false;
//     }

//     if (arr[n - 1] <= sum)
//     {
//         bool op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
//         bool op2 = subset_sum(arr, n - 1, sum);
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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n + 10; i++)
    {
        for (int j = 0; j < n + 10; j++)
        {
            dp[i][j] = -1;
        }
    }

    int sum;
    cin >> sum;

    cout << subset_sum(arr, n, sum) << endl;

    return 0;
}
