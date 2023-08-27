#include <iostream>
#include <vector>

using namespace std;

bool isSymmetrical(const vector<int> &planks)
{
    int n = planks.size();
    int left = 0, right = n - 1;
    int leftSum = planks[left], rightSum = planks[right];

    while (left < right)
    {
        if (leftSum == rightSum)
        {
            left++;
            right--;
            leftSum += planks[left];
            rightSum += planks[right];
        }
        else if (leftSum < rightSum)
        {
            left++;
            leftSum += planks[left];
        }
        else
        {
            right--;
            rightSum += planks[right];
        }
    }

    return leftSum == rightSum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> planks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> planks[i];
        }
        cout << (isSymmetrical(planks) ? "YES" : "NO") << endl;
    }

    return 0;
}
