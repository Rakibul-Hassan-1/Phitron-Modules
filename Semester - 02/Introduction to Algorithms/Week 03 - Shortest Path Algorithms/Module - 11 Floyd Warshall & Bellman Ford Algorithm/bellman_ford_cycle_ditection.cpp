#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
typedef pair<int, int> pii;
vector<pii> g[N];
int d[N];
int n, m;
bool flag = false;



void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }

    d[s] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (auto vpair : g[u])
            {
                int v = vpair.first;
                int w = vpair.second;

                if (d[u] != INF && d[v] > d[u] + w)
                {
                    d[v] = d[u] + w;
                    flag = true;
                }
            }
        }
    }
}


int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    bellman_ford(1);

    if (flag == true)
    {
        cout << "Cycle Detected!";
    }
    else
    {
       // cout << "Not Detected!" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "Node " << i << " : " << d[i] << endl;
        }
    }

    return 0;
}