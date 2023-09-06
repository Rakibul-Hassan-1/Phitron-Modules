#include <bits/stdc++.h>
using namespace std;

bool nap(int s, long long n)
{
    // base case
    if (s == n)
        return true;

    if (s > n)
        return false;

    return nap(s * 10, n) || nap(s * 20, n);

    
    // long long int option1 = nap(s * 10, n);
    // long long int option2 = nap(s * 20, n);

    // if (option1 == n)
    //     return true;
    // if (option2 == n)
    //     return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (nap(1, n) == true)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}