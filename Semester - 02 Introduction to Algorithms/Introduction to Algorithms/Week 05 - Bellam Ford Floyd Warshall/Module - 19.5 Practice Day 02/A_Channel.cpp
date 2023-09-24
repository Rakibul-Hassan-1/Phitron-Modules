#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        string s;
        cin >> n >> a >> q >> s;
        int max_online = a;
        int min_online = a;
        for (int i = 0; i < q; i++)
        {
            if (s[i] == '+')
            {
                a++;
            }
            else
            {
                a--;
            }
            max_online = max(max_online, a);
            min_online = min(min_online, a);
        }
        if (max_online == n && min_online == 0)
        {
            cout << "MAYBE" << endl;
        }
        else if (max_online == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
