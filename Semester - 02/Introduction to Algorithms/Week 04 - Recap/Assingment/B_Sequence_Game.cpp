#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> a;
        a.push_back(b[0]); // Add the first element of b to a

        for (int i = 1; i < n; i++)
        {
            if (b[i] > b[i - 1])
            {
                a.push_back(b[i]);
            }
            else if (b[i] == b[i - 1])
            {
                a.push_back(1); // Add 1 as the smaller number
                a.push_back(b[i]);
            }
            else
            {
                a.push_back(b[i]);
            }
        }

        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
    }
}