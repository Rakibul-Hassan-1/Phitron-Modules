#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("^");
            }
        }
        else
        {
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        k = k + 2;
        s--;
    }

    return 0;
}