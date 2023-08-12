#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
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

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        if (s == d)
        {
            cout << "0" << endl;
            continue;
        }
        bfs(s);

        if (visited[d])
        {
            cout << level[d] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

        // reset queue
        for (int i = 0; i <= 100000; i++)
        {
            visited[i] = false;
            level[i] = 0;
        }
    }
    return 0;
}