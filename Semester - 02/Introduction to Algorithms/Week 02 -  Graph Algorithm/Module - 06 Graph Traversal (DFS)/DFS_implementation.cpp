#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> adjmat[N];
bool visited[N];

void dfs(int u)
{
    // section 1:
    visited[u] = true;
    cout << "Visited : " << u << endl;
    for (int v : adjmat[u])
    {
        if (visited[v] == true)
        {
            continue;
        }
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
        adjmat[u].push_back(v);
        adjmat[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node " << i << " : ";
    //     for (auto x : adjmat[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    dfs(1);
    return 0;
}