#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < N / 2; i++)
    {

        int temp = students[i].id;
        students[i].id = students[N - i - 1].id;
        students[N - i - 1].id = temp;
    }

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}
