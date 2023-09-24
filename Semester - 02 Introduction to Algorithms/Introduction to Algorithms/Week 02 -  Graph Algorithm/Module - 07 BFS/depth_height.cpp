#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        // cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

void dfs(int u)
{
    visited[u] = true;
    cout << "Visiting node: " << u << endl;

    for (int v : adj[u])
    {
        if (visited[v])
            continue;

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
    int key;
    cin >> key;
    bfs(0);
    // dfs(1);
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        // cout << i << " : " << level[i] << endl;
        if (level[i] == key)
            v.push_back(i);
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}