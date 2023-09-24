#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> graph[N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int K;
    cin >> K;

    int CH = graph[K].size();

    cout << CH << "\n";

    return 0;
}
