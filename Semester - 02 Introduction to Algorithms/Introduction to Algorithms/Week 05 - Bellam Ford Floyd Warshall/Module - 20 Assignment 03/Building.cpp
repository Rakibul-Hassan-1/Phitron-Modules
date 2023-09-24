#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1e5 + 10;
bool visited[N];
vector<pi> v[N];

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims_algo(int s, int n)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edge_list;
    pq.push(Edge(s, s, 0));
    int nodeCount = 0;
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();

        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if (visited[b])
            continue;
        visited[b] = true;
        edge_list.push_back(parent);
        nodeCount++;
        for (int i = 0; i < v[b].size(); i++)
        {
            pi child_pair = v[b][i];
            if (!visited[child_pair.first])
            {
                pq.push(Edge(b, child_pair.first, child_pair.second));
            }
        }
    }

    edge_list.erase(edge_list.begin());
    long long int sum = 0;
    for (Edge x : edge_list)
    {
        sum += (long long int)x.w;
    }
    if (nodeCount == n)
        cout << sum;
    else
        cout << -1;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    prims_algo(1, n);

    return 0;
}