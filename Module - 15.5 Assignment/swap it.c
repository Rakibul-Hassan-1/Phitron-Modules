#include <stdio.h>

void swapIt(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, temp);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swapIt(a, b);
    return 0;
}