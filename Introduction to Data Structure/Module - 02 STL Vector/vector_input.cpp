#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*   vector<int> v;
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
          int value;
          cin >> value;
          v.push_back(value);
      } */

    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}