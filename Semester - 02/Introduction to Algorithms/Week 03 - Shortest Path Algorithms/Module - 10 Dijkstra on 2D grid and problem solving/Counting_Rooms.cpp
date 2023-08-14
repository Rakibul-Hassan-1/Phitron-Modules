#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int visited[N][N];
vector<string> g;
typedef pair<int, int> pii;
vector<pii> direction = {{0, -1}, {0, +1}, {-1, 0}, {+1, 0}};
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    // validity cheak
    if (!isValid(i, j))
        return;

    if (visited[i][j])
        return;

    if (g[i][j] == '#')
        return;

    visited[i][j] = true;

    // dfs(i, j - 1);
    // dfs(i, j + 1);
    // dfs(i - 1, j);
    // dfs(i + 1, j);
    // smart technique
    for (auto d : direction)
    {
        dfs(i + d.first, j + d.second);
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

    int room = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '#')
                continue;

            if (visited[i][j])
                continue;

            dfs(i, j);
            room++;
        }
    }
    cout << room << endl;

    return 0;
}