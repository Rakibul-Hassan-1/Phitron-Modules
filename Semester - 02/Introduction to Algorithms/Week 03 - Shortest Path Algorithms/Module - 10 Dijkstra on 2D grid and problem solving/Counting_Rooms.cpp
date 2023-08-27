#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
vector<pii> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<string> g;
const int N = 1000;
int visited[N][N];
int n, m;

bool isValidNode(int i, int j)
{
    return (i >= 0 && i <= n && j >= 0 && j <= m);
}

void dfs(int i, int j)
{
    // visited[u] = true;
    // for (auto child : g[u])
    // {
    //     visited[child] = true;
    //     dfs[child];
    // }

    if (!isValidNode(i, j))
        return;

    if (visited[i][j])
        return;

    if (g[i][j] == '#')
        return;

    visited[i][j] = true;
    // for simplicity using this direction vector
    /*
        dfs(i, j + 1);
        dfs(i, j - 1);
        dfs(i - 1, j);
        dfs(i + 1, j); */

    for (auto d : direction)
    {
        dfs(i + d.first, j + d.second);
        /* combination
        0,1
        0, -1
        1, 0
        -1, 0
        */
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        g.push_back(x);
    }

    int ct = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '#')
                continue;

            if (visited[i][j])
                continue;

            dfs(i, j);
            ct++;
        }
    }

    cout << ct << endl;

    return 0;
}