#include <stdio.h>

void hello()
{
    printf("\nHello");
}

void print()
{
    printf("\nPrint");
    hello();
}
int main()
{
    print();
    printf("\nMain function!");
    return 0;
}