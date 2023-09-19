#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int year;
    cin >> year;
    while (1)
    {
        year++;
        int dgt1 = year / 1000;
        int dgt2 = year / 100 % 10;
        int dgt3 = year / 10 % 10;
        int dgt4 = year % 10;
        if (dgt1 != dgt2 && dgt1 != dgt3 && dgt1 != dgt4 && dgt2 != dgt3 && dgt2 != dgt4 && dgt3 != dgt4)
        {
            break;
        }
    }
    cout << year << endl;

}
