#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
  int n;
        cin >> n;
        int cnt_odd = 0, cnt_even = 0;
        for (int i = 0; i < 2*n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                cnt_even++;
            } else {
                cnt_odd++;
            }
        }
        if (cnt_odd == cnt_even) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
