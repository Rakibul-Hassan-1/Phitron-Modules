#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    stack<int> s;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!s.empty() && !q.empty())
    {
        int stackVal = s.top();
        s.pop();
        int queueVal = q.front();
        q.pop();
        if (stackVal != queueVal)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (!s.empty() || !q.empty())
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
