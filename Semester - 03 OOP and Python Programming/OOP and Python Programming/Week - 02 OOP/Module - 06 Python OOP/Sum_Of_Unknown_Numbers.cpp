//testing
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

int lol(vector<int> &series, int l)
{
    if (series.size() < 2)
    {
        return series[0] + l;
    }
    int n = series[1] - series[0];
    int tot = (l - series[0]) / n + 1;
    return (tot * (series[0] + l)) / 2;
}

void solve()
{
    int n, k;
    cin >> n;
    vector<int> series(n);

    for (int j = 0; j < n; j++)
        cin >> series[j];
    cin >> k;
    int sum = lol(series, k);
    cout << sum << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
