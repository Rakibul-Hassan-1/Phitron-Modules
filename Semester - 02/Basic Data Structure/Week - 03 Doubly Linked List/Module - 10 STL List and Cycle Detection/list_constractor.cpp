#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {100, 200, 300};
    list<int> mylist(v.begin(), v.end());
    // list<int> list2 = {10, 20, 30, 40, 50};
    // int arr[5] = {1, 2, 3, 4, 5};
    // list<int> mylist(arr, arr + 5);
    // list<int> mylist(10, 5); //(size, value)
    // cout << mylist.size();
    // cout << mylist.front();
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}