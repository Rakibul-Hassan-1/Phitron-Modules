#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int div = num1 - num2;
    if (div <= 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", div);
    }

    return 0;
}