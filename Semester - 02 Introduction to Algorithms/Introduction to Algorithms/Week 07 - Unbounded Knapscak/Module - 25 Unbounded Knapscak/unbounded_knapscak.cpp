/*
input:
4 6
5 3 2 4
4 1 3 2
output:
18
*/

#include <bits/stdc++.h>
using namespace std;
int unbounded_knapscak(int n, int s, int val[], int w[])
{
    if (n == 0 || s == 0)
        return 0;

    if (s >= w[n - 1])
    {
        int choice1 = val[n - 1] + unbounded_knapscak(n, s - w[n - 1], val, w);
        int choice2 = unbounded_knapscak(n - 1, s, val, w);
        return max(choice1, choice2);
    }
    else
    {
        return unbounded_knapscak(n - 1, s, val, w);
    }
}
int main()
{

    int n, s;
    cin >> n >> s;
    int val[n], wieght[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wieght[i];
    }
    cout << unbounded_knapscak(n, s, val, wieght);

    return 0;
}