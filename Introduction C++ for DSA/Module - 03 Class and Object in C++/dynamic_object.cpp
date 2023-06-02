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
    // bike honda(100150, 7401, name);
    bike *rakib = new bike(100150, 7401, name);
    cout << rakib->owner << endl;
    cout << rakib->price << endl;
    cout << rakib->number << endl;

    // delete an object
    delete rakib;

    cout << rakib->owner << endl;
    cout << rakib->price << endl;
    cout << rakib->number << endl;

    return 0;
}
