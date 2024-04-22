#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int minIslands = 1;

        if (k == 0)
        {
            minIslands = n;
        }
        else
        {

            int isolatedIslands = min(k, n - 1);

            minIslands = n - isolatedIslands;
        }

        cout << minIslands << endl;
    }

    return 0;
}
