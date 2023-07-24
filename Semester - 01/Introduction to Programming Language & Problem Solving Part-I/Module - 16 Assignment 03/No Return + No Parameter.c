// 4. No Return + No Parameter
#include <stdio.h>
#include <string.h>

void fun()
{
    char s[100], s2[100];
    scanf("%s%s", s, s2);
    printf("%s", strcat(s, s2));
}

int main()
{
    fun();
    return 0;
}