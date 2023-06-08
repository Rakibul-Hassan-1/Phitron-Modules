#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    // vector<int> v2 = {1, 2, 3};
    // v2 = v;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}