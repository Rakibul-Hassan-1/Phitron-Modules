#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int first_value = -1, second_value = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > first_value)
            {
                first_value = arr[i];
                second_value = i;
            }
        }

        int cheak = second_value;
        arr[cheak] = -1;

        int tower1 = -1, tower2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > tower1)
            {
                tower1 = arr[i];
                tower2 = i;
            }
        }

        if (second_value < tower2)
        {
            cout << second_value << " " << tower2 << endl;
        }
        else
        {
            cout << tower2 << " " << second_value << endl;
        }
    }

    return 0;
}