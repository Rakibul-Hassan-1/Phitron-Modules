#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl; // 0
    v.push_back(10);
    cout << v.capacity() << endl; // 1
    v.push_back(20);
    cout << v.capacity() << endl; // 2
    v.push_back(30);
    cout << v.capacity() << endl; // 4
    v.push_back(40);
    cout << v.capacity() << endl; // 4
    v.push_back(50);
    cout << v.capacity() << endl; // 8
    return 0;
}