#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

// vector<int> value;
void dfs(int u)
{

    visited[u] = true;
    // value.push_back(u);

    for (int x : adj[u])
    {
        if (visited[x] == true)
        {
            continue;
        }

        dfs(x);
    }
    cout << u << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    dfs(1);

    // reverse(value.begin(), value.end());
    // for (auto x : value)
    // {
    //     cout << x << " ";
    // }

    return 0;
}
