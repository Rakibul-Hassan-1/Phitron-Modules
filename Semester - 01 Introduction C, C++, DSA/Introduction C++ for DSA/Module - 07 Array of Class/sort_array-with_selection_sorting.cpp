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
        for (int j = i + 1; j <= 2; j++)
        {
            if (arr[i].marks < arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}