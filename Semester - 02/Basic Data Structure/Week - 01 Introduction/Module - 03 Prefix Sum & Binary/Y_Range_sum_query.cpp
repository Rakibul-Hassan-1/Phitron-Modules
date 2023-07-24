// time complexity of the program is O(N)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long  arr[n];
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
    while (q--) // O(n)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;
        if (l == 0)
        {
            sum = prefix[r];
        }
        else
        {
            sum = prefix[r] - prefix[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}