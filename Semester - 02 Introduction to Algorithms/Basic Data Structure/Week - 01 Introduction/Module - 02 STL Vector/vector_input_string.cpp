#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        s.push_back(name);
    }

    for (string value : s)
    {
        cout << value << endl;
    }

    return 0;
}