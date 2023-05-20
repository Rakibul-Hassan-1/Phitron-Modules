#include <stdio.h>

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

int main()
{

    printf("Sum is: %d", sum(10, 20));

    return 0;
}