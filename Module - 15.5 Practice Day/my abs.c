#include <stdio.h>

int abs(int x)
{
    if (x < 0)
    {
        return x * (-1);
    }
    else
    {
        return x;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", abs(n));
    return 0;
}