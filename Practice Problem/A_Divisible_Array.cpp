#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n, 1);

        int sum = n;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i - 1];
        }
        if (sum % n != 0)
        {
            a[0] += n - sum % n;
        }
        for (int i = 2; i <= n; i++)
        {
            int j = i - 1;
            while (j < n && a[j] % i != 0)
            {
                a[j] += n;
                j += i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
