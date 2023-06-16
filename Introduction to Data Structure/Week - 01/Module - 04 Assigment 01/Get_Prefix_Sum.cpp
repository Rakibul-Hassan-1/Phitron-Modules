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
    long long prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) // O(n)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) // O(n)
    {
        cout << prefix[i] << " ";
    }
}