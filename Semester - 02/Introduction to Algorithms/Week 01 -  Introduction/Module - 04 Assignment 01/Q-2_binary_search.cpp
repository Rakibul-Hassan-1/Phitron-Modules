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
    int index = 0;

    while (l <= r) // O(logN)
    {
        int mid_index = (l + r) / 2;
        if (arr[mid_index] == x)
        {
            flag = true;
            index += mid_index;
            break;
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
        cout << index << endl;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}