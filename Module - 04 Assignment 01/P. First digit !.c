#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int mod = num / 1000;
    if (mod % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}