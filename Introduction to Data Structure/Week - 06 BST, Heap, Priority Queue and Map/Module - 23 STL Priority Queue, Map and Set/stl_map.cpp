#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"Rakib", 99});
    // mp.insert({"Sohan", 12});
    // mp.insert({"Akib", 72});
    // mp.insert({"Akif", 17});

    mp["Akib"] = 100;
    mp["Rakib"] = 101;
    mp["Akif"] = 102;
    mp["Sohan"] = 103;

    // cout << mp["Rakib"] << endl;
    // for (auto it = mp.begin(); it != mp.end(); it++) // O(log N)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if (mp.count("Akib")) // O(logN)
    {
        cout << "Ase" << endl;
    }

    return 0;
}