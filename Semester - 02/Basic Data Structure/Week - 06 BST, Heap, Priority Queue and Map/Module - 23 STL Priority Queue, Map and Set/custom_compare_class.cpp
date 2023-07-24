#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    // contructor
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks <= b.marks)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}