#include <bits/stdc++.h>
using namespace std;

class bike
{
public:
    int price, number;
    char owner[100];
    bike(int p, int n, const char *o)
    {
        price = p;
        number = n;
        strcpy(owner, o);
    }
};

// RVO => Return Vlaue Optimization system code line: 17-23
bike fun()
{
    char name[100] = "Rakibul Hassan";
    bike honda(100150, 7401, name);
    return honda;
}

int main()
{

    bike model1 = fun();
    cout << model1.owner << endl;
    cout << model1.price << endl;
    cout << model1.number << endl;

    return 0;
}
