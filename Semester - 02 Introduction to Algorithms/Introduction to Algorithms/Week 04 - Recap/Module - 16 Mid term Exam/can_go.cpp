#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1001;
const int INF = INT_MAX;
vector<pii> g[N];
vector<long long int> dist(N, INF);
vector<long long int> visited(N);

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for (pii vpair : g[u])
        {
            int node = vpair.first;
            int cost = vpair.second;
            if (visited[node])
                continue;

            if (dist[u] + cost < dist[node])
            {
                dist[node] = dist[u] + cost;
                pq.push({dist[node], node});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        // g[v].push_back({u, w});
    }
    int src;
    cin >> src;
    int t;
    cin >> t;
    while (t--)
    {
        int dn, dw;
        cin >> dn >> dw;
        dijkstra(src);

        if (dist[dn] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}