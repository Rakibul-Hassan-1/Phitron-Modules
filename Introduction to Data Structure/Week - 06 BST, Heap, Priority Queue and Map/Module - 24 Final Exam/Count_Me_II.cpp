#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> mp;
        int num;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            mp[num]++;
        }

        int total = 0, maxValue = 0;

        for (auto it : mp)
        {
            int value = it.first;
            int counter = it.second;

            if (counter > total || (counter == total && value > maxValue))
            {
                total = counter;
                maxValue = value;
            }
        }

        cout << maxValue << " " << total << endl;
    }

    return 0;
}
