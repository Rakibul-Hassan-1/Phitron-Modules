// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string word1, word2;
//     while (cin >> word1 >> word2)
//     {
//         int i = 0, j = 0;
//         while (i < word1.size() && j < word2.size())
//         {
//             if (word1[i] == word2[j])
//             {
//                 j++;
//             }
//             i++;
//         }

//         if (j == word2.size())
//             cout << "Possible" << endl;
//         else
//             cout << "Impossible" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int n = s1.size(), m = s2.size();

        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    int ans1 = dp[i - 1][j];
                    int ans2 = dp[i][j - 1];
                    dp[i][j] = max(ans1, ans2);
                }
            }
        }
        if (dp[n][m] == s2.size())
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}