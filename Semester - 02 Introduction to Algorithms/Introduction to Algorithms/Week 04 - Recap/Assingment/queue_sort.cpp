#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> pq;
    int m;
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        pq.push({u, v});
    }
    
    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
    }

    return 0;
}