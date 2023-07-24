#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;
    v.push_back(x);
    // cout << current_index;
    int current_index = v.size() - 1;
    // parent dekhbo
    while (current_index != 0)
    {

        int parent_index = (current_index - 1) / 2;
        // cout << parent << endl;
        if (v[parent_index] < v[current_index])
        {
            swap(v[parent_index], v[current_index]);
            current_index = parent_index;
        }
    }

    return 0;
}