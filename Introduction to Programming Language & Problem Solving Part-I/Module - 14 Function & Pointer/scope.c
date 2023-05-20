#include <stdio.h>

void fun(void)
{
    int s = 200;
    printf("Adress of fun: %p", &s);
}

int main()
{
    int s = 100;
    fun();
    printf("\nAdress of Main: %p", &s);
    return 0;
}