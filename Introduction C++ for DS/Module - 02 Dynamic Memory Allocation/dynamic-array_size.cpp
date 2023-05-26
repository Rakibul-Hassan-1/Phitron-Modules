#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int *b = new int[7];
    for (int i = 0; i < 5; i++)
    {
        b[i] = arr[i];
    }
    b[6] = 10;
    b[7] = 20;

    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // delete[] arr;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}