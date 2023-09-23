#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int minDifference = INT_MAX;

void findMinDifference(vector<int> &coins, int n, int index, int sum1, int sum2, int count1, int count2)
{
    // Base case
    if (index == n)
    {
        if ((n % 2 == 0 && count1 == count2) || (n % 2 != 0 && (count1 == count2 || count1 == count2 + 1)))
        {
            minDifference = min(minDifference, abs(sum1 - sum2));
        }
        return;
    }

    // Give the current coin to Chinki
    findMinDifference(coins, n, index + 1, sum1 + coins[index], sum2, count1 + 1, count2);

    // Give the current coin to Minki
    findMinDifference(coins, n, index + 1, sum1, sum2 + coins[index], count1, count2 + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }

        minDifference = INT_MAX;
        findMinDifference(coins, n, 0, 0, 0, 0, 0);
        cout << minDifference << endl;
    }
    return 0;
}
