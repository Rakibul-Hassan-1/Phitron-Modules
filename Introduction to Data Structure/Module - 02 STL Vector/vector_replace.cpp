#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 1, 5, 1, 5};
    replace(v.begin(), v.end(), 1, 100);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}