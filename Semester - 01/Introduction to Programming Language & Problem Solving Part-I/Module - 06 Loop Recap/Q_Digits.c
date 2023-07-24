#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, rem = 0;
        scanf("%d", &n);
        if (n == 0)
            printf("0");
        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            printf("%d ", rem);
        }
        printf("\n");
    }
}