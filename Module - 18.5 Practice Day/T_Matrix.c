#include <stdio.h>

int main()
{
    int n;
    int sum_primary = 0, sum_secondary = 0;

    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_primary += arr[i][j];
                continue;
            }
            if (i + j == n - 1)
            {
                sum_secondary += arr[i][j];
                continue;
            }
        }
    }
    if (sum_primary < 0)
    {
        sum_primary = sum_primary * (-1);
    }
    if (sum_secondary < 0)
    {
        sum_secondary = sum_secondary * (-1);
    }
    printf("%d", sum_primary + sum_secondary);

    return 0;
}