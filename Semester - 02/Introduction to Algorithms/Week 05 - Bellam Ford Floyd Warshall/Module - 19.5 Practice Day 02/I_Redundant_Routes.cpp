#include <bits/stdc++.h>
using namespace std;

const int N = 3005;
int parent[N], sizNode[N], ans, n, u, v, cnt[N];

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v)
{
    parent[v] = v;
    sizNode[v] = 1;
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizNode[a] < sizNode[b])
            swap(a, b);
        parent[b] = a;
        sizNode[a] += sizNode[b];
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        union_sets(u, v);
        cnt[u]++;
        cnt[v]++;
    }
    for (int i = 1; i <= n; i++)
    {
        ans += max(1, cnt[i] - 1);
    }
    
    cout << ans - 2 << endl;

    return 0;
}
