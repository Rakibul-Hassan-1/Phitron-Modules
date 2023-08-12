// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e4 + 5;
// int adjmat[N][N];

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adjmat[u][v] = 1;
//         adjmat[v][u] = 1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << adjmat[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<pair<int, int>> adj[N];

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";
        for (auto x : adj[i])
        {
            cout << "(" << x.first << "," << x.second << ")";
        }
        cout << endl;
    }
    return 0;
}
