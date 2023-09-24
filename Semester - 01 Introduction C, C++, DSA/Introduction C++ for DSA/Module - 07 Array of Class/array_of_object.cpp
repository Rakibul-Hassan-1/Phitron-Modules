#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student arr[10];
    for (int i = 0; i <= 2; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    for (int i = 0; i <=2; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}