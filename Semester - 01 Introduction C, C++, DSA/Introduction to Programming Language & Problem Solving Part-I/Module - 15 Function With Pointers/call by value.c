#include <stdio.h>

void fun(int x)
{
    x = 200;
    printf("\nVlaue of X in fun function => %d", x);
}
int main()
{
    int x = 10;
    printf("\nValue of X in main function => %d", x);
    fun(x);
    return 0;
}