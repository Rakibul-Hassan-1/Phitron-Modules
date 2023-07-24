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
    Student mx;
    mx.roll = INT_MIN;
    for (int i = 0; i <= 2; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    for (int i = 0; i <= 2; i++)
    {
        if (mx.roll < arr[i].roll)
        {
            mx = arr[i];
        }
    }
    cout << "Max roll number is: " << mx.roll << endl;

    return 0;
}