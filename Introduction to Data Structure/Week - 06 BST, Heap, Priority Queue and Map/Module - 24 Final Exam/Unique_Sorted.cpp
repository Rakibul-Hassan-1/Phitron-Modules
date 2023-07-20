#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> st;
        int n, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            st.insert(x);
        }
        vector<int> v;
        for (auto it = st.begin(); it != st.end(); it++)
        {
            v.push_back(*it);
        }
        
        reverse(v.begin(), v.end());

        for (auto value : v)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}