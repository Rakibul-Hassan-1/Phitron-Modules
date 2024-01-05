#include <iostream>
#include <vector>

using namespace std;

int countEliminations(string& s, int l, int r) {
    int eliminations = 0;
    int consecutiveCount = 1;

    for (int i = l; i < r; ++i) {
        if (s[i] == s[i + 1]) {
            consecutiveCount++;
        } else {
            eliminations += max(0, consecutiveCount - 1);
            consecutiveCount = 1;
        }
    }

    eliminations += max(0, consecutiveCount - 1);
    return eliminations;
}

int main() {
    string s;
    cin >> s;

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        int result = countEliminations(s, l - 1, r - 1);
        cout << result << endl;
    }

    return 0;
}
