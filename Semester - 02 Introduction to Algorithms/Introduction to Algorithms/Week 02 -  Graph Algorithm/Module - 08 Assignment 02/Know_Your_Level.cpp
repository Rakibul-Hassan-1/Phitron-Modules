#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
vector<int> adj[N];
vector<int> v;
bool visited[N];
int level[N];

void bfs(int s, int destination)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (level[u] == destination)
        {
            v.push_back(u);
        }

        for (int x : adj[u])
        {
            if (visited[x])
                continue;

            q.push(x);
            visited[x] = true;
            level[x] = level[u] + 1;
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

    int level;
    cin >> level;
    
    bfs(0, level);

    if (v.size() == 0)
        cout << -1 << endl;

    else
    {
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}