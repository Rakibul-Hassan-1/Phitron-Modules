#include <stdio.h>

void fun(int i)
{
    if (i == 6) // base case যেটা দিয়ে রিকারশন থামানো হয়
        return;

    printf("%d\n", i);
    fun(i + 1);
}
int main()
{
    fun(1);
    return 0;
}