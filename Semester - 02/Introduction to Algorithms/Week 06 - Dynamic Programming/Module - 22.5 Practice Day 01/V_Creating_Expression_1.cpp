#include <bits/stdc++.h>
using namespace std;

bool knapsack(long long idx, long long curr_sum, long long arr[], long long x, long long n)
{
    // Base case
    if (idx == n)
        return curr_sum == x;

    if (knapsack(idx + 1, curr_sum + arr[idx], arr, x, n))
        return true;

    if (knapsack(idx + 1, curr_sum - arr[idx], arr, x, n))
        return true;

    return false;
}

int main()
{
    long long n, x;
    cin >> n >> x;

    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (knapsack(0, 0, arr, x, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
