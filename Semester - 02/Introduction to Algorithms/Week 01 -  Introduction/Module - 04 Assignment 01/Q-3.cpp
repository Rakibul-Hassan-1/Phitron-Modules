#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int l = 0;
    int r = n - 1;
    bool flag = false;

    while (l <= r) // O(logN)
    {
        int mid_index = (l + r) / 2;
        if (arr[mid_index] == x)
        {
            if (mid_index > 0 && arr[mid_index - 1] == x)
            {
                flag = true;
                break;
            }
            if (mid_index < n - 1 && arr[mid_index + 1] == x)
            {
                flag = true;
                break;
            }
            
            cout << "NO\n";
            return 0;
        }

        if (x > arr[mid_index])
        {
            l = mid_index + 1;
        }

        else
        {
            r = mid_index - 1;
        }
    }

    if (flag == true)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }

    return 0;
}
