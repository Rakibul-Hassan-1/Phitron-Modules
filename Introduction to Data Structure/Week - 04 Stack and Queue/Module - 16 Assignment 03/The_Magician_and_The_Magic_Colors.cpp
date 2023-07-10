#include <bits/stdc++.h>
using namespace std;

char getValue(char colorOne, char colorTwo)
{
    if ((colorOne == 'R' || colorTwo == 'R') && (colorOne == 'B' || colorTwo == 'B'))
    {
        return 'P';
    }
    else if ((colorOne == 'R' || colorTwo == 'R') && (colorOne == 'G' || colorTwo == 'G'))
    {
        return 'Y';
    }
    else if ((colorOne == 'B' || colorTwo == 'B') && (colorOne == 'G' || colorTwo == 'G'))
    {
        return 'C';
    }
    else if (colorOne == colorTwo)
    {
        return 'E';
    }

    return 'N';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v;

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            v.push_back(x);
        }
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                s.push(v.at(i));
            }
            else
            {
                stack<char> copyS = s;

                char colorTwo = v.at(i);
                int isFirst = 1;
                while (!copyS.empty())
                {
                    char colorOne = copyS.top();
                    char value = getValue(colorOne, colorTwo);

                    if (value == 'E')
                    {
                        s.pop();
                    }
                    else if (value == 'N')
                    {
                        if (isFirst)
                        {
                            s.push(colorTwo);
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        colorTwo = value;
                        s.pop();
                        if (!s.empty())
                        {
                            int prevValue = s.top();
                            if (prevValue == value)
                            {
                                s.pop();
                            }
                        }
                        s.push(value);
                    }

                    copyS.pop();
                    isFirst = 0;
                }
            }
        }

        stack<char> printS;

        while (!s.empty())
        {
            printS.push(s.top());
            s.pop();
        }

        while (!printS.empty())
        {
            cout << printS.top();
            printS.pop();
        }

        cout << "\n";
    }
    return 0;
}