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
        map<int, int> frequency;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            frequency[x]++;
        }

        int thiefCode;
        for (auto it = frequency.begin(); it != frequency.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                thiefCode = it->first;
                break;
            }
        }

        cout << thiefCode << endl;
    }

    return 0;
}
