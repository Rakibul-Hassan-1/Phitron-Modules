#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();

        string sentence, word;
        getline(cin, sentence);
        stringstream ss(sentence);
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
        }

        int maxCounter = 0;
        string big_name;
        
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > maxCounter)
            {
                // cout << it->first << " " << it->second << " " << endl;
                maxCounter = it->second;
                big_name = it->first;
            }
        }
        cout << big_name << " " << maxCounter << endl;
    }

    return 0;
}