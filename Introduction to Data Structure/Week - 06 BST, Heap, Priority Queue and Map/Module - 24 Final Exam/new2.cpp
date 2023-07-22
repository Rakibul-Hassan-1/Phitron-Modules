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
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        else
            return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    string name;
    int roll, marks;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
        }

        else if (command == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (command == 2)
        {
            // base case
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }

    return 0;
}