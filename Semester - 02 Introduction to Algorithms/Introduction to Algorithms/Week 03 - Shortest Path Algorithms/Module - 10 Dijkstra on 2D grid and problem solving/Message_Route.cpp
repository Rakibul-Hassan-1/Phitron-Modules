#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
vector<int> parent(N, -1);

void DFS(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;

        DFS(v);
    }
}
void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    level[source] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(1);
    cout << level[n] + 1 << endl;
    int current = n;
    vector<int> path;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
    {
        cout << x << " ";
    }
    return 0;
}