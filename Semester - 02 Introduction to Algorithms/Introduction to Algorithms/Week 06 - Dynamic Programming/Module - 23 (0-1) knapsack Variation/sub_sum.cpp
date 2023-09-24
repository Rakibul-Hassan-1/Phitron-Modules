#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[], int n, int sum)
{
    // base case
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (arr[n - 1] <= sum)
    {
        bool op1 = subset_sum(arr, n - 1, sum - arr[n - 1]);
        bool op2 = subset_sum(arr, n - 1, sum);
        return op1 || op2;
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

    if (subset_sum(arr, n, sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}