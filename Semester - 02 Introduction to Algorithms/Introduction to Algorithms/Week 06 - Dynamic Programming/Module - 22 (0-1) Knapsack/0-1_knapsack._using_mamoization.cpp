/*
this is a practice solution by not using memoization technique
and the total time complexity of this code is O(n*s)
*/
#include <bits/stdc++.h>
using namespace std;
int save[1000][1000];

int knapsack(int n, int s, int v[], int w[])
{
    // base case: always depend on changing variables
    if (n == 0 || s == 0)
        return 0;

    // mamoization process
    if (save[n][s] != -1)
        return save[n][s];

    if (w[n - 1] <= s)
    {
        int option1 = knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
        int option2 = knapsack(n - 1, s, v, w);
        return save[n][s] = max(option1, option2);
    }
    else
    {
        return save[n][s] = knapsack(n - 1, s, v, w);
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

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            save[i][j] = -1;
        }
    }

    int s;
    cin >> s;
    cout << knapsack(n, s, v, w) << endl;

    return 0;
}