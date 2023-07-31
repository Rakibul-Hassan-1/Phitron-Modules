#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        set<int> unique;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (unique.count(arr[i]) == 0)
            {
                unique.insert(arr[i]);
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
