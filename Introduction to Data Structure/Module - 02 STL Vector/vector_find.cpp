#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 2, 1, 5, 1, 5};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 100); // automatic detect data type
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";

    return 0;
}