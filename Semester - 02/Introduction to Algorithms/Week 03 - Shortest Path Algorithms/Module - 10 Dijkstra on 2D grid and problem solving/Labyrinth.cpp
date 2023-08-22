#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
vector<pii> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int visited[N][N];
int level[N][N];
pii parent[N][N];
vector<string> g;
int n, m, si, sj, di, dj;

bool isValid(int i, int j)
{
    return (i >= 0 && i <= n && j >= 0 && j <= m);
}

void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pii node = q.front();
        int i = node.first;
        int j = node.second;
        q.pop();
        for (auto d : direction)
        {
            int ni = i + d.second;
            int nj = j + d.first;
            if (!isValid(ni, nj))
                continue;
            if (visited[ni][nj])
                continue;
            if (g[ni][nj] == '#')
                continue;

            q.push({ni, nj});
            visited[ni][nj] = true;
            level[ni][nj] = level[i][j] + 1;
            parent[ni][nj] = {i, j};
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < m; j++)
        {
            if (x[j] == 'A')
            {
                si = i, sj = j;
            }
            if (x[j] == 'B')
            {
                di = i, dj = j;
            }
        }
        g.push_back(x);
    }

    bfs(si, sj);

    if (level[di][dj] != 0)
    {
        cout << "YES\n";
        cout << level[di][dj] << endl;

        vector<pii> path;
        pii curr = {di, dj};
        while (!(curr.first == si && curr.second == sj))
        {
            path.push_back(curr);
            curr = parent[curr.first][curr.second];
        }
        path.push_back({si, sj});
        reverse(path.begin(), path.end());
        for (long long int i = 1; i < path.size(); i++)
        {
            if (path[i - 1].first == path[i].first)
            {
                // left right movement
                if (path[i - 1].second == path[i].second - 1)
                {
                    cout << "R";
                }
                else
                {
                    cout << "L";
                }
            }
            else
            {
                // Up down movement
                if (path[i - 1].first == path[i].first - 1)
                {
                    cout << "D";
                }
                else
                {
                    cout << "U";
                }
            }
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}