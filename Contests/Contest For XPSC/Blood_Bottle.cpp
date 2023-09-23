#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = 0;
        vector<int> numbers;
        
        for (auto val : s)
        {
            if (val == '1')
            {
                n++;
            }
            else
            {
                numbers.push_back(n);
                n = 0;
            }
        }
        numbers.push_back(n);
        sort(numbers.begin(), numbers.end(), greater<int>());
        int result = 0;

        for (int i = 0; i < numbers.size(); i += 2)
        {
            result += numbers[i];
        }
        cout << result << endl;
    }

    return 0;
}