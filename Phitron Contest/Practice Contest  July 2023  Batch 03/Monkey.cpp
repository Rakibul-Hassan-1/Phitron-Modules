#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {

        string alphabate;

        for (char c : s)
        {
            if (!isspace(c))
                alphabate.push_back(c);
        }

        sort(alphabate.begin(), alphabate.end());
        cout << alphabate << endl;
    }

    return 0;
}
