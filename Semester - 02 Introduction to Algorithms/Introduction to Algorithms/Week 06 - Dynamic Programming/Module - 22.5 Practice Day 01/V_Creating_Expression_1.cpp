#include <bits/stdc++.h>
using namespace std;
int size;
long long n, x;
int arr[21];
bool knapsack(long long sum, int i)
{
    // Base case
    if (i == n)
        return sum == x;

    bool op1 = knapsack(sum - arr[i], i + 1);
    bool op2 = knapsack(sum + arr[i], i + 1);
    return op1 || op2;
}

int main()
{

    cin >> n >> x;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (knapsack(arr[0], 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
