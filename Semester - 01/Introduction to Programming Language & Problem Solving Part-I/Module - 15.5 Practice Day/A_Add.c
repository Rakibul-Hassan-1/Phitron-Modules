#include <stdio.h>

int sum(int x, int y)
{
    int value = x + y;
    return value;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d", sum(num1, num2));

    return 0;
}