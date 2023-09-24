#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const long long int INF = 1e18;
typedef pair<int, int> pii;
vector<pii> adj[N];
int visited[N];
long long int d[N];
vector<long long> dist(N, INF);
int parent[N];
int n, m;

int dijkstra(int src, int d)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto child : adj[u])
        {
            int node = child.first;
            int cost = child.second;

            if (dist[node] > dist[u] + cost)
            {
                dist[node] = dist[u] + cost;
                // parent[node] = u;

                pq.push({dist[node], node});
            }
        }
    }

    // Print the path
    // vector<int> path;
    // for (int v = d; v != -1; v = parent[v])
    // {
    //     path.push_back(v);
    // }
    // reverse(path.begin(), path.end());
    // cout << "The shortest path is ";
    // for (int v : path)
    // {
    //     cout << v << "-> ";
    // }

    cout << dist[d] << endl;

    // return dist[d];
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int src, d;
    cin >> src >> d;

    dijkstra(src, d);

    return 0;
}
