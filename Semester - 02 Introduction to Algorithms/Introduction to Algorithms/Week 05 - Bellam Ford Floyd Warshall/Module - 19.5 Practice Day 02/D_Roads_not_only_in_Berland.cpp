#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // A leader
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
    cin >> n;
    e = n - 1;
    dsu_set(n);
    vector<pair<int, int>> v1;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
        {
            v1.push_back({a, b});
        }

        dsu_union(a, b);
    }
    vector<pair<int, int>> v;

    for (int i = 2; i <= n; i++)
    {
        int leaderofi = dsu_find(i);
        int leaderofj = dsu_find(i - 1);
        if (leaderofj == leaderofi)
            continue;

        else
        {
            v.push_back({1, i});
            dsu_union(i - 1, i);
        }
    }
    cout << v1.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << " ";
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}