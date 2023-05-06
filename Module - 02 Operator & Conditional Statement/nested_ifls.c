#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 20000)
    {
        if (num == 20000)
        {
            printf("Gucci Bag");
        }
        else
        {
            printf("Gucci Bag\nGucci Belt\n");
        }
    }
    else if (num >= 5000)
    {
        printf("Levis Bag");
    }

    else
    {
        printf("Something");
    }

    return 0;
}