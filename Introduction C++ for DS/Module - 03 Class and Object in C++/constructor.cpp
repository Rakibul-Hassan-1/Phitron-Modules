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
int main()
{
    char name[100] = "Rakibul Hassan";
    bike model1(100500, 8461, name);

    cout << "Bike Details:" << endl;
    cout << "Price: " << model1.price << endl;
    cout << "Number: " << model1.number << endl;
    cout << "Owner: " << model1.owner << endl;

    return 0;
}
