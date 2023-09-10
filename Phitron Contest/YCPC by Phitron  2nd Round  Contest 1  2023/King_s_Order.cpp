#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1e5 + 10;
vector<pi> v[N];
bool visited[N];
class Edge
{
public:
    int a, b, w;
    // constructor
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
// custom compare class
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
    int nodeCount = 0;
    pq.push(Edge(s, s, 0));

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
        nodeCount++;
        edge_list.push_back(parent);
        for (int i = 0; i < v[b].size(); i++)
        {
            pi child = v[b][i];
            if (!visited[child.first])
            {
                pq.push(Edge(b, child.first, child.second));
            }
        }
    }
    // deleting the first node which is initially 1 1 0
    edge_list.erase(edge_list.begin());
    long long int sum = 0;
    int road_count = 0;
    for (Edge value : edge_list)
    {
        road_count++;
        sum += (long long)(value.w);
    }

    if (nodeCount == n)
        cout << road_count << " " << sum;
    else
        cout << "Not Possible";
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