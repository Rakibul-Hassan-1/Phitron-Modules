#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3 + 10;
vector<pii> g[N];
int level[N];
bool visited[N][N];
int dist[N];

void dijkstra(int u)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[u] = 0;
    pq.push({dist[u], u});

    while (!pq.empty())
    {
        int node = pq.pop();
        
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : " << dist[i];
    }

    return 0;
}