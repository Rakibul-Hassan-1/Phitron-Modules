#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr1, vector<int> &arr2, int n, int m, vector<int> &result)
{
    int x = 0, y = 0, k = 0;
    while (x < n && y < m)
    {
        if (arr1[x] > arr2[y])
        {
            result[k++] = arr1[x++];
        }
        else
        {
            result[k++] = arr2[y++];
        }
    }

    while (x < n)
    {
        result[k++] = arr1[x++];
    }

    while (y < m)
    {
        result[k++] = arr2[y++];
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int size = n + m;
    vector<int> result(size);

    solve(arr1, arr2, n, m, result);
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
