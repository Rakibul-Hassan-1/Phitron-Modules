#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 2, 1, 5, 2};
    vector<int> v2 = {101, 102, 103, 104};
    v.insert(v.begin() + 2, v2.begin(), v2.end()); // v.insert(এখানে পয়েন্টার দিতে হয়)
    for (int x : v)                                // range base for loop -> এখানে X ইন্তিজারের মাধ্যমে ইনডেক্স ছাড়াই ইন্তিজার ভেলুগুলো বের করে আনা হয়েছে

    {
        cout << x << " ";
    }

    return 0;
}