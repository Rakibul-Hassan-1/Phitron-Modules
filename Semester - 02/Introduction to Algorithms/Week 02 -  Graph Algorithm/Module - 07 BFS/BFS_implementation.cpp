#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        }
        dfs(v);
    }
}
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int store = q.front();
        q.pop();

        cout << "Visited : " << store << endl;

        for (int x : adj[store])
        {
            if (visited[x] == true)
                continue;
            q.push(x);
            visited[x] = true;
            level[x] = level[store] + 1;
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
    bfs(1);
    cout << "**********************\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "Level " << i << " : " << level[i] << endl;
    }
    return 0;
}