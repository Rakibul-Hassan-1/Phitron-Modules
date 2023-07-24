#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    printf("value => %d", x);
    printf("\nAddress of X => %p", &x);
    printf("\nAddress of X => %d", *ptr);
    printf("\nprt size => %d byte", sizeof(ptr));

    return 0;
}