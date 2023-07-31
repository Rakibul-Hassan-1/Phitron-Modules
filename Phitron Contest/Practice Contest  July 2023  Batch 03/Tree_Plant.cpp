#include <iostream>
using namespace std;

int calculateSum(int year)
{
    if (year == 1)
        return 1;

    int parentYear = year - 1;
    int sumOfParentTrees = calculateSum(parentYear);
    return (2 * sumOfParentTrees) + parentYear;
}

int main()
{
    int Y;
    cin >> Y; // Input Yth year

    int sumOfPlantTrees = calculateSum(Y);
    cout << sumOfPlantTrees << endl; // Output sum of all values of plant trees at Yth year

    return 0;
}
