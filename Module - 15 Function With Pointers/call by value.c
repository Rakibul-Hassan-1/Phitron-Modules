#include <stdio.h>

void fun(int x)
{
    printf("\nAddress of fun function => %p", &x);
}
int main()
{
    int x = 10;
    printf("\nAddress of fun function => %p", &x);
    fun(x);
    return 0;
}