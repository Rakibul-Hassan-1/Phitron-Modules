#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
// typedef pair<int, int> pii;
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
    int first_value = pq.top().first;
    int second_value = pq.top().second;

    cout << first_value << " " << second_value << endl;
    pq.pop();
  }
  

  return 0;
}