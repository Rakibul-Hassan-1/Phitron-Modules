#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n && j < i + k; j++)
            {
                if (s[j] < s[i])
                {
                    reverse(s.begin() + i, s.begin() + j + 1);
                    break;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
