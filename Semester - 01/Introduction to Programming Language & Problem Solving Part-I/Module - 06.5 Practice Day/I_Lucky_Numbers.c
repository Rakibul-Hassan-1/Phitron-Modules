#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int div = num / 10;
    int div2 = num % 10;
    if (div2 % div == 0 || div % div2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}