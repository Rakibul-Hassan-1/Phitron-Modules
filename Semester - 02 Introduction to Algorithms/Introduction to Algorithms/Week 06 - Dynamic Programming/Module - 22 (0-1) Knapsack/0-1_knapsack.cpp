/*
this is a practice solution by not using memoization technique
and the total time complexity of this code is O(2*n)
*/
#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int v[], int w[])
{
    // base case: always depend on changing variables
    if (n == 0 || s == 0)
        return 0;

    if (w[n - 1] <= s)
    {
        int option1 = knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
        int option2 = knapsack(n - 1, s, v, w);
        return max(option1, option2);
    }
    else
    {
        return knapsack(n - 1, s, v, w);
    }
}

int main()
{

    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int s;
    cin >> s;

    cout << knapsack(n, s, v, w) << endl;

    return 0;
}