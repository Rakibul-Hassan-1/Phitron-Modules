#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x); // O(logN)
    }
    vector<int> v;
    for (auto it = st.begin(); it != st.end(); it++)
    {
        // cout << *it << " "; // O(logN)
        v.push_back(*it);
    }
    reverse(v.begin(), v.end()); // O(N)
    for (auto x : v)             // Rage base loop
    {
        cout << x << " ";
    }
    cout << endl;

    if (st.count(9)) // O(logN)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}