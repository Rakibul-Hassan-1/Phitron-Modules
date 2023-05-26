#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int *ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }
}
