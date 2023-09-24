#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;
    parent[u] = -1;

    while (!q.empty())
    {
        int store = q.front();
        q.pop();

        for (int v : adj[store])
        {
            if (visited[v])
                continue;

            q.push(v);
            visited[v] = true;
            level[v] = level[store] + 1;
            parent[v] = store;
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, d;
    cin >> s >> d;

    BFS(s);
    cout << "Distance : " << level[d] << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Parent of " << i << " : " << parent[i] << endl;
    // }
    vector<int> path;
    int current = d;

    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    cout << "Path : ";
    for (int x : path)
    {
        cout << x << " ";
    }

    return 0;
}