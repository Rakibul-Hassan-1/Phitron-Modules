// #include <bits/stdc++.h>
// using namespace std;
// typedef pair<int, int> pii;
// const int N = 1e3 + 5;
// const int INF = 1e9 + 5;
// vector<pii> adj[N];
// vector<bool> visited(N);
// vector<int> dist(N, INF);

// void dijkstra(int source)
// {
//     priority_queue<pii, vector<pii>, greater<pii>> pq;
//     dist[source] = 0;
//     pq.push({dist[source], source});

//     while (!pq.empty())
//     {
//         int u = pq.top().second;
//         pq.pop();
//         visited[u] = true;

//         for (pii vpair : adj[u])
//         {
//             int nodes = vpair.first;
//             int precidence_value = vpair.second;

//             if (visited[nodes])
//                 continue;

//             // relaxation
//             if (dist[nodes] > dist[u] + precidence_value)
//             {
//                 dist[nodes] = dist[u] + precidence_value;
//                 pq.push({dist[nodes], nodes});
//             }
//         }
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }

//     dijkstra(1);

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Distance of node " << i << " : ";
//         cout << dist[i] << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// const long long INF = 1e18;
// typedef pair<int, int> pii;
// vector<bool> visited(N);
// vector<long long> dist(N, INF);
// vector<pii> adj[N];

// void dijkstra(int source)
// {
//     priority_queue<pii, vector<pii>, greater<pii>> pq;
//     dist[source] = 0;
//     pq.push({dist[source], source});

//     while (!pq.empty())
//     {
//         int parent = pq.top().second;
//         pq.pop();
//         visited[parent] = true;

//         for (pii child : adj[parent])
//         {
//             int node = child.first;
//             int cost = child.second;

//             if (visited[node])
//                 continue;

//             // relaxtion part
//             if (dist[node] > dist[parent] + cost)
//             {
//                 dist[node] = dist[parent] + cost;
//                 pq.push({dist[node], node});
//             }
//         }
//     }
// }

// int main()
// {

//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }

//     dijkstra(1);

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Node " << i << " : " << dist[i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const long long INF = 1e18;
typedef pair<int, int> pii;
vector<bool> visited(N);
vector<long long> dist(N, INF);
vector<pii> adj[N];

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        int parent = pq.top().second;
        pq.pop();
        visited[parent] = true;

        for (auto child : adj[parent])
        {
            int node = child.first;
            int cost = child.second;

            if (visited[node])
                continue;

            // relaxation part
            if (dist[node] > dist[parent] + cost)
            {
                dist[node] = dist[parent] + cost;
                pq.push({dist[node], node});
            }
        }
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
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : " << dist[i] << endl;
    }
}