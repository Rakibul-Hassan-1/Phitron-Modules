#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
int depth[N];
int height[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    // cout << u << " ";
    for (int v : adj[u])
    {
        if (visited[v])
            continue;

        depth[v] = depth[u] + 1;
        dfs(v);
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

    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Depth of " << i << " : " << depth[i] << endl;
    }

    return 0;
}