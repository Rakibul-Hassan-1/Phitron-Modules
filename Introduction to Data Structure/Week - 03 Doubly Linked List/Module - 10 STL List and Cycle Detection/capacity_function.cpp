#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist = {10, 20, 30};
    // cout << mylist.max_size();
    for (int val : mylist)
    {
        cout << val << " ";
    }
    mylist.clear();
    cout << endl;
    cout << mylist.size();

    return 0;
}