#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int dp[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dq[] = {1, 2, 2, 1, -1, -2, -2, -1};
vector<pi> path = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

int bfs(int u, int v, int si, int sj, int di, int dj)
{
    vector<vector<int>> dist(u, vector<int>(v, -1));
    queue<pair<int, int>> que;

    que.push({si, sj});
    dist[si][sj] = 0;

    while (!que.empty())
    {
        int p = que.front().first;
        int q = que.front().second;
        que.pop();

        if (p == di && q == dj)
        {
            return dist[p][q];
        }

        for (int i = 0; i < 8; ++i)
        {
            pi pr = path[i];

            int np = p + pr.first;
            int nq = q + pr.second;

            if (np >= 0 && np < u && nq >= 0 && nq < v && dist[np][nq] == -1)
            {
                dist[np][nq] = dist[p][q] + 1;
                que.push({np, nq});
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int u, v, si, sj, di, dj;
        cin >> u >> v >> si >> sj >> di >> dj;

        int minimum_value = bfs(u, v, si, sj, di, dj);
        cout << minimum_value << endl;
    }

    return 0;
}