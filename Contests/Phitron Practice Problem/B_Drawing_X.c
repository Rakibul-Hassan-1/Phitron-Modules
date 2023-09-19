#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int div = n / 2;
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
            if (i == div && j == div)
            {
                printf("X");
                continue;
            }
            if (i == j)
            {
                printf("\\");
                continue;
            }
            if (i + j == (n - 1))
            {
                printf("/");
                continue;
            }

            printf("*");
        }
        printf("\n");
    }

    return 0;
}
