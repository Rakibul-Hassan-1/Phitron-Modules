#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int div = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == div && j == div)
            {
                cout << "X";
                continue;
            }
            if (i == j)
            {
                cout << "\\";
                continue;
            }
            if (i + j == (n - 1))
            {
                cout << "/";
                continue;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
