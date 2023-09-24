// #include <bits/stdc++.h>
// #define pi pi
// using namespace std;
// const int N = 1005;
// bool vis[N][N];
// int dis[N][N];
// int n, m;
// vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// bool isValid(int cI, int cJ)
// {
//     if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
//         return true;
//     else
//         return false;
// }
// bool bfs(int si, int sj, int di, int dj)
// {
//     queue<pi> q;
//     q.push({si, sj});
//     // dis[si][sj] = 0;
//     vis[si][sj] = true;
//     while (!q.empty())
//     {
//         pi parent = q.front();
//         int pI = parent.first;
//         int pJ = parent.second;
//         q.pop();

//         if (pI == di && pJ == dj)
//         {
//             return true;
//         }

//         for (int i = 0; i < 4; i++)
//         {
//             pi p = path[i];
//             int cI = pI + p.first;
//             int cJ = pJ + p.second;

//             if (isValid(cI, cJ) && !vis[cI][cJ] && vis[cI][cJ] == '.')
//             {
//                 vis[cI][cJ] = true;
//                 q.push({cI, cJ});
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     cin >> n >> m;
//     char a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     int si, sj, di, dj;
//     cin >> si >> sj >> di >> dj;
//     bfs(si, sj, di, dj);

//     if (bfs(si, sj, di, dj))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
int n, m;
const int N = 1e3 + 10;
vector<vector<char>> a;
vector<vector<bool>> vis;
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '.' && !vis[x][y];
}

bool bfs(int si, int sj, int di, int dj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            pi p = path[i];
            int cI = x + p.first;
            int cJ = y + p.second;

            if (isValid(cI, cJ))
            {
                q.push({cI, cJ});
                vis[cI][cJ] = true;
            }
        }
    }

    return vis[di][dj];
    // return false;
}

int main()
{
    cin >> n >> m;

    a = vector<vector<char>>(n, vector<char>(m));
    vis = vector<vector<bool>>(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    cout << (bfs(si, sj, di, dj) ? "YES" : "NO") << endl;

    return 0;
}
