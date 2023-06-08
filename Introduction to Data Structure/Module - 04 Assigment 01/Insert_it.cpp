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
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }
    int pos;
    cin >> pos;
    v.insert(v.begin() + pos, v2.begin(), v2.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}