#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const long long int INF = 1e18;
typedef pair<int, int> pii;
vector<pii> adj[N];
int visited[N];
long long int d[N];
int parent[N];
int n, m;

void Dijkstra(int src)
{
    for (int i = 0; i <= n; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push({d[src], src});

    while (!pq.empty())
    {
        pii f = pq.top();
        pq.pop();

        int selectedNode = f.second;

        if (visited[selectedNode] == 1)
            continue;

        visited[selectedNode] = true;

        for (auto child : adj[selectedNode])
        {
            int cost = child.first;
            int adjNode = child.second;

            if (d[adjNode] > d[selectedNode] + cost)
            {
                d[adjNode] = d[selectedNode] + cost;
                pq.push({d[adjNode], adjNode});
                parent[adjNode] = selectedNode;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    int src = 1;

    Dijkstra(src);

    // for(int i=1;i<=n;i++){
    //     cout<<d[i]<<" ";
    // }

    if (visited[n] == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int currentNode = n;
    vector<int> path;

    while (1)
    {
        path.push_back(currentNode);
        if (currentNode == src)
        {
            break;
        }
        currentNode = parent[currentNode];
    }

    reverse(path.begin(), path.end());

    for (int val : path)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
