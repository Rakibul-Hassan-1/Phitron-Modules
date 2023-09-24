#include <bits/stdc++.h>
using namespace std;

class bike
{
public:
    int price;
    int model;
    char name[1001];
};

int main()
{
    // class object
    bike model1, model2;
    cin >> model1.price >> model1.name;
    cout << model1.price << endl
         << model1.name;
    return 0;
}