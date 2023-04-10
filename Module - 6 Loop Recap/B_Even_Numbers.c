#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("-1");
    }
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}