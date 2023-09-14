#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        vector<bool> dp(1001, false);
        dp[M] = true;

        for (int a : A)
        {
            for (int j = M; j <= 1000; j++)
            {
                if (j - a >= 0 && dp[j - a])
                {
                    dp[j] = true;
                }
            }
        }

        if (dp[1000])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
