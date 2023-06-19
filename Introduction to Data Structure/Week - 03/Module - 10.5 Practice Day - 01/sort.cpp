#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        mylist.push_back(val);
    }

    mylist.sort();

    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}