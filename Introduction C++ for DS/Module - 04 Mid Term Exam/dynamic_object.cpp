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
    char name[100] = "Rakibul Hassan";
    Person *prsn1 = new Person(name, 5.8, 23);
    cout << "Name: " << prsn1->name << endl;
    cout << "Height: " << prsn1->height << endl;
    cout << "Age: " << prsn1->age << endl;

    return 0;
}