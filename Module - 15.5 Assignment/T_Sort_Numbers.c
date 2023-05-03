#include <stdio.h>

void asending(int x, int y, int z)
{
    if (x > y && x > z)
    {
        printf("%d\n%d\n%d", y, z, x);
    }
    else if (y > z)
    {
        printf("%d\n%d\n%d", x, z, y);
    }
    else
    {
        printf("%d\n%d\n%d", z, x, y);
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    asending(a, b, c);
    printf("\n\n%d\n%d\n%d", a, b, c);
    return 0;
}