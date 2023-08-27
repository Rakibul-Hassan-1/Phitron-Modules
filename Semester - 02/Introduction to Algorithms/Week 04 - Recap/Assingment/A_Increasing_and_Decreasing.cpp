#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> a(n);
        a[0] = x;
        a[n - 1] = y;
        int diff = y - x;
        int i = 1;
        bool possible = true;
        while (diff > 0 && i < n - 1)
        {
            int add = min(diff - (n - i - 1), i);
            a[i] = a[i - 1] + add;
            diff -= add;
            i++;
        }
        if (diff > 0 || i < n - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
