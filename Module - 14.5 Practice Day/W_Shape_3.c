#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = (2 * n - 1) / 2;
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
        s--;
    }
    s = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
        s++;
    }

    return 0;
}