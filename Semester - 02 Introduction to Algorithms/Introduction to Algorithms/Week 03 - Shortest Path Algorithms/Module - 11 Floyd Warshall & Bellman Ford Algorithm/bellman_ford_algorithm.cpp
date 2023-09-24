// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// const int INF = 1e9 + 10;
// typedef pair<int, int> pii;
// vector<pii> g[N];
// int d[N];
// int n, m;

// void bellman_ford(int s)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         d[i] = INF;
//     }

//     d[s] = 0;

//     for (int i = 1; i < n; i++) // Loop n-1 times
//     {
//         for (int u = 1; u <= n; u++) // Loop through all vertices
//         {
//             for (auto vpair : g[u])
//             {
//                 int v = vpair.first;
//                 int w = vpair.second;

//                 if (d[u] != INF && d[v] > d[u] + w)
//                 {
//                     d[v] = d[u] + w;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;

//     while (m--)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         g[u].push_back({v, w});
//     }

//     bellman_ford(1);

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Distance of " << i << " : " << d[i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
const int INF = 1e9 + 10;
typedef pair<int, int> pii;
vector<pii> g[N];
int dist[N];
int n, m;
void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    dist[s] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (auto vpair : g[j])
            {
                int v = vpair.first;
                int w = vpair.second;

                if (dist[j] != INF && dist[v] > dist[j] + w)
                {
                    dist[v] = dist[j] + w;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    bellman_ford(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance " << i << " : " << dist[i] << endl;
    }

     return 0;
}