#include <stdio.h>

int main()
{
    int s, n, k;
    scanf("%d", &n);
    s = 0;
    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s++;
       k= k-2;
        printf("\n");
    }
    return 0;
}