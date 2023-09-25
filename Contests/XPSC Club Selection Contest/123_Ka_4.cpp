#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << j + 1;
            }
        }
        else if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << n;
            }
        }

        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << i + 1;
                }
                else if (j == n - 1)
                {
                    cout << n;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}