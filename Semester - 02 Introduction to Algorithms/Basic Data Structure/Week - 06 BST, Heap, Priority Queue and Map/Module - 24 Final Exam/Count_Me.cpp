#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> wordCountr;

        int maxCount = 0;
        string mostWords;

        while (ss >> word)
        {
            wordCountr[word]++;

            if (wordCountr[word] > maxCount)
            {
                maxCount = wordCountr[word];
                mostWords = word;
            }
        }

        cout << mostWords << " " << maxCount << endl;
    }

    return 0;
}
