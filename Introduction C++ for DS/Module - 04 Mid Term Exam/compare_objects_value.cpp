// Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor.
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{
    char obj1_name[100] = "Rakibul Hassan";
    char obj2_name[100] = "Saiful Islam";
    Person *prsn1 = new Person(obj1_name, 5.8, 23);
    Person *prsn2 = new Person(obj2_name, 5.8, 28);

    if (prsn1->age > prsn2->age)
    {
        cout << "Name: " << prsn1->name << endl;
    }
    else
    {
        cout << "Name: " << prsn2->name << endl;
    }

    return 0;
}