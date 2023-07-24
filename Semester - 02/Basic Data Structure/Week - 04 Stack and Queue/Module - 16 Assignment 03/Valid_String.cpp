#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    stack<char> stk;
    for (char c : s) // range base loop
    {
        if (!stk.empty() && stk.top() != c)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }
    return stk.empty();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string stk;
        getline(cin, stk);
        if (check(stk))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
