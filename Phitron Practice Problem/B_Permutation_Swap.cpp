#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }
        vector<int> d(n - 1);
        for (int i = 0; i < n - 1; i++) {
            d[i] = a[i + 1] - a[i];
        }
        vector<int> lis(n - 1, 1);
        for (int i = 1; i < n - 1; i++) {
            for (int j = 0; j < i; j++) {
                if (d[j] < d[i]) {
                    lis[i] = max(lis[i], lis[j] + 1);
                }
            }
        }
        int ans = 1;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, lis[i]);
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
