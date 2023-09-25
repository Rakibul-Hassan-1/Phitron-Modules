#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dis[N];
bool vis[N];
int node[N];
vector<int> graph[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    dis[source] = 0, node[source] = -1, vis[source] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : graph[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                node[child] = parent;
                dis[child] = dis[parent] + 1;
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b); // undirected
        graph[b].push_back(a);
    }

    int source;
    cin >> source;
    bfs(source);

    int d;
    cin >> d;

    int count;
    cin >> count;

    if (vis[d])
    {
        int y = 0;
        int x = d;
        while (x != -1)
        {
            y++;
            x = node[x];
        }
        int k = y / 2;

        cout << (count >= k ? "YES" : "NO") << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}