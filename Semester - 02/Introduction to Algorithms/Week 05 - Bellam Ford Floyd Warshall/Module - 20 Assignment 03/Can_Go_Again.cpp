#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const long long int INF = 1e18 + 10;
typedef pair<int, int> pii;
vector<pii> g[N];
long long int d[N];
int n, m, s, t;
bool flag = false;
// bool visited[N];

void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }

    d[s] = 0;
    // visited[s] = true;

    for (int i = 1; i <= n; i++)
    {
        flag = false;
        for (int u = 1; u <= n; u++)
        {
            for (auto vpair : g[u])
            {
                long long int v = vpair.first;
                long long int w = vpair.second;
                // visited[v] = true;
                if (d[u] != INF && d[v] > d[u] + w )
                {
                    d[v] = d[u] + w;
                    flag = true;
                    // visited[v] = true;
                }
            }
        }
        if (!flag)
            break;
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        long long int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        // g[v].push_back({u, w});
    }

    cin >> s;
    bellman_ford(s);

    if (flag == true)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        cin >> t;
        while (t--)
        {
            int s;
            cin >> s;
            if (d[s] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << d[s] << endl;
            }
        }
    }

    return 0;
}
