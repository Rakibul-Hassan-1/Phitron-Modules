#include <stdio.h>

int main()
{
    int i, j, k = 1, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }

        k++;
        printf("\n");
    }
    return 0;
}