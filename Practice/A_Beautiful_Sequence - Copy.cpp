#include <bits/stdc++.h>
using namespace std;

bool is_good(vector<int> subseq) {
    for (int i = 0; i < subseq.size(); i++) {
        if (subseq[i] == i+1) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found_good_subseq = false;
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> subseq;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subseq.push_back(a[i]);
                }
            }
            if (is_good(subseq)) {
                found_good_subseq = true;
                break;
            }
        }
        if (found_good_subseq) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
