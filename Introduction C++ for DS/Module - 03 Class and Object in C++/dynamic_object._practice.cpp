#include <bits/stdc++.h>
using namespace std;

class STUDENT
{
public:
    char name[100];
    int age;
    int id;
    int batch;
    STUDENT(char *n, int a, int i, int b) // constructor
    {
        strcpy(name, n);
        age = a;
        id = i;
        batch = b;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Id: 0" << id << endl;
        cout << "Student Batch: " << batch << endl;
    }
};

int main()
{
    char name[100] = "Rakibul Hassan";
    STUDENT *prt = new STUDENT(name, 23, 2707499, 27);
    cout << prt->name << endl;
    cout << prt->age << endl;
    cout << prt->id << endl;
    cout << prt->batch << endl;
  

    return 0;
}
