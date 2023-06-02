#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        int pos = s.find(x);

        while (pos != -1)
        {
            s.replace(pos, x.length(), "$");
            pos = s.find(x, pos + 1);
        }

        cout << s << endl;
    }

    return 0;
}
