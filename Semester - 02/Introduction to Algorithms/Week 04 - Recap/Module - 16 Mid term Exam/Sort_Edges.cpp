#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int main()
{

  priority_queue<pii, vector<pii>, greater<pii>> pq;

  int t;
  cin >> t;
  while (t--)
  {
    int u, v;
    cin >> u >> v;
    pq.push({u, v});
  }
  while (!pq.empty())
  {
    cout << pq.top().first << " " << pq.top().second << endl;
    pq.pop();
  }

  return 0;
}