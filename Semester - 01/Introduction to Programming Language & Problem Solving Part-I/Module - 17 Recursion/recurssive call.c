#include <stdio.h>

void fun()
{
    printf("\nHello world");
    fun();
}

int main()
{
    fun();
    return 0;
}