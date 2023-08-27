// #include <bits/stdc++.h>
// #define pi pair<int, int>
// using namespace std;
// int n, m;
// const int N = 1005;
// bool vis[N][N];
// char a[N][N];
// vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
// bool isValid(int cI, int cJ)
// {
//     if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
//         return true;
//     else
//         return false;
// }

// int cnt;
// void dfs(int si, int sj)
// {
//     vis[si][sj] = true;
//     cnt++;
//     for (int i = 0; i < 4; i++)
//     {
//         pi p = path[i];
//         int ci = si + p.first;
//         int cj = sj + p.second;
//         if (isValid(ci, cj) && !vis[ci][cj])
//         {
//             dfs(ci, cj);
//         }
//     }
// }
// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     int mx = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && a[i][j] == '.')
//             {
//                 cnt = 0;
//                 dfs(i, j);
//                 mx = max(cnt, mx);
//             }
//         }
//     }

//     if (cnt == 0)
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         cout << cnt << endl;
//     }

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // typedef pair<int, int> pi;
// // int n, m;
// // const int N = 1e3 + 10;
// // vector<vector<char>> a;
// // vector<vector<bool>> vis;
// // vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// // bool isValid(int x, int y)
// // {
// //     return x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '.' && !vis[x][y];
// // }

// // bool bfs(int si, int sj, int di, int dj)
// // {
// //     queue<pi> q;
// //     q.push({si, sj});
// //     vis[si][sj] = true;

// //     while (!q.empty())
// //     {
// //         int x = q.front().first;
// //         int y = q.front().second;
// //         q.pop();

// //         for (int i = 0; i < 4; i++)
// //         {
// //             pi p = path[i];
// //             int cI = x + p.first;
// //             int cJ = y + p.second;

// //             if (isValid(cI, cJ))
// //             {
// //                 q.push({cI, cJ});
// //                 vis[cI][cJ] = true;
// //             }
// //         }
// //     }

// //     return vis[di][dj];
// //     // return false;
// // }

// // int main()
// // {
// //     cin >> n >> m;

// //     a = vector<vector<char>>(n, vector<char>(m));
// //     vis = vector<vector<bool>>(n, vector<bool>(m, false));

// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             cin >> a[i][j];
// //         }
// //     }

// //     int si, sj, di, dj;
// //     cin >> si >> sj >> di >> dj;

// //     cout << (bfs(si, sj, di, dj) ? "YES" : "NO") << endl;

// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1001;
vector<string> v;
int visited[N][N];
int n, m;
vector<pii> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
int dfs(int si, int sj)
{

    if (!isValid(si, sj))
        return 0;
    if (visited[si][sj])
        return 0;
    if (v[si][sj] == '-')
        return 0;
    visited[si][sj] = true;
    int count = 1;
    for (auto d : direc)
    {
        int ni = si + d.first;
        int nj = sj + d.second;
        count += dfs(ni, nj);
    }
    return count;
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.' && !visited[i][j])
            {
                int ca = dfs(i, j);
                mn = min(mn, ca);
            }
        }
    }
    if (mn == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << mn;
    }
    return 0;
}