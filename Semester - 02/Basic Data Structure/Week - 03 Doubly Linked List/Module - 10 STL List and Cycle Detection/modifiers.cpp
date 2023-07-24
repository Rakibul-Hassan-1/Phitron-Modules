#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist = {10, 20, 30, 40, 50};
    // mylist.push_back(100);
    // mylist.push_back(500);
    // mylist.pop_back();
    // mylist.push_front(100);
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(), 2), 100); // O(n)
    // mylist.erase(next(mylist.begin(), 2));
    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }
    auto it = find(mylist.begin(), mylist.end(), 40);
    if (it == mylist.end())
    {
        cout << "Not found!";
    }
    else
    {
        cout << "Found!";
    }
    return 0;
}