#include <stdio.h>

void fun(int *ptr)
{
    *ptr = 100;
    printf("Address of prt=> %p", ptr); // ptr hold the address of x, and ptr has own memory address
    printf("\nMain functions X value is => %d", *ptr);
}

int main()
{
    int x = 50;
    fun(&x);
    printf("\nAddress of x=> %p", &x);

    return 0;
}