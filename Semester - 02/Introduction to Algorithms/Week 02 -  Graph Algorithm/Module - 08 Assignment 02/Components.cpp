#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
vector<int> adj[N];
bool visited[N];
int cc_size = 0;

void dfs(int u)
{
    visited[u] = true;
    cc_size++;
    for (int v : adj[u])
    {
        if (visited[v])
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        if (visited[i])
        {
            continue;
        }

        cc_size = 0;
        dfs(i);

        // corner case if one node is available then there is no connecting component available
        if (cc_size > 1)
        {
            v.push_back(cc_size);
        }
    }

    // sort those elements to print
    sort(v.begin(), v.end());
    for (int s : v)
    {
        cout << s << " ";
    }

    return 0;
}
