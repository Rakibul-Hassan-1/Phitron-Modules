#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[i] = 0;
        }
        else if (v[i] > 0)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 2;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}