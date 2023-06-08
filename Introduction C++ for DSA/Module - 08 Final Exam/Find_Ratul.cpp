#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    int res = input.find("Ratul");
    if (res != -1)
    {
        cout << "YES" << endl;
    }
    else
    { 
        cout << "NO" << endl;
    }

    return 0;
}
