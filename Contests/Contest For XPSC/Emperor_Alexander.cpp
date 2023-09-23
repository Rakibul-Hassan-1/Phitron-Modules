#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];

class Edge
{
public:
    long long int a, b, w;

    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(const Edge a, const Edge b)
{
    return a.w < b.w;
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    // Corner case: Single city with no roads
    if (n == 1 && e == 0)
    {
        cout << "0 0" << endl;
        return 0;
    }

    vector<Edge> edges;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }

    sort(edges.begin(), edges.end(), cmp);

    long int mstCost = 0;
    long int edgesAdded = 0;

    for (Edge edge : edges)
    {
        if (dsu_find(edge.a) != dsu_find(edge.b))
        {
            mstCost += edge.w;
            edgesAdded++;
            dsu_union(edge.a, edge.b);
        }
    }

    if (edgesAdded == n - 1)
    {
        cout << edges.size() - edgesAdded << " " << mstCost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}
