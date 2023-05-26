#include <bits/stdc++.h>
using namespace std;

class STUDENT
{
public:
    char name[100];
    int age;
    int id;
    int batch;
    STUDENT(char *n, int a, int i, int b)
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
    char name2[100] = "Fayshal Hossen";
    STUDENT stu1(name, 23, 2707499, 27), stu2(name2, 28, 2707487, 27);
    stu1.display();
    stu2.display();

    return 0;
}