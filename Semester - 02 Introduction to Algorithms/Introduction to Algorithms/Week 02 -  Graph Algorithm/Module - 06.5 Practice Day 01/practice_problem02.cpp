#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int adjmat[N][N];

int main()
{
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjmat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "List " << i+1 << " : ";

        for (int j = 0; j < n; j++)
        {
            if (adjmat[i][j] == 1)
            {
                cout << j+1 << " ";
            }
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << adjmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
