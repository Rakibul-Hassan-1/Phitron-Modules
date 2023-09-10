// #include <bits/stdc++.h>
// using namespace std;
// bool memo[1005][1005];
// bool dp[1005][1005];

// bool canReach(long long int target, int n)
// {
//     // base case
//     if (target == n)
//     {
//         return true;
//     }

//     if (target > n)
//     {
//         return false;
//     }

//     if (dp[target][n] == -1)
//     {
//         return memo[target][n];
//     }

//     dp[target][n] = true;

//     bool choice1 = canReach(target * 2, n);
//     bool choice2 = canReach(target + 3, n);

//     return memo[target][n] = choice1 || choice2;
// }

// int main()
// {
//     long long int t, n;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;

//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= n; j++)
//             {
//                 dp[i][j] = -1;
//             }
//         }
//         if (n == 1)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {
//             if (canReach(1, n))
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }
// // #include <bits/stdc++.h>

// // using namespace std;
// // #define ll long long
// // ll n;
// // bool reach_value(ll current)
// // {
// //     if (current == n)
// //         return true;
// //     if (current > n)
// //         return false;
// //     else
// //     {
// //         bool op1 = reach_value(current + 10);
// //         bool op2 = reach_value(current * 2);
// //         return op1 || op2;
// //     }
// // }
// // int main()
// // {

// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         cin >> n;
// //         if (reach_value(1))
// //         {
// //             cout << "YES" << endl;
// //         }
// //         else
// //         {
// //             cout << "NO" << endl;
// //         }
// //     }
// //     return 0;
// // }

