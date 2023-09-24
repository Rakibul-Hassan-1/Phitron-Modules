#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int n, m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
        return true;
    else
        return false;
}
vector<int> v;

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    v.push_back(si);

    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                cnt++;
                // count++;
                dfs(i, j);
                for (auto x : v)
                {
                    cout << x << " ";
                }
                cout << endl;
                v.clear();
            }
        }
    }
    cout << cnt << endl;

    return 0;
}