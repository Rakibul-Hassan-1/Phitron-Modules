#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool compareStudents(Student s1, Student s2)
{
    int total_marks1 = s1.math_marks + s1.eng_marks;
    int total_marks2 = s2.math_marks + s2.eng_marks;

    if (total_marks1 == total_marks2)
    {
        return s1.id < s2.id;
    }

    return total_marks1 > total_marks2;
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
