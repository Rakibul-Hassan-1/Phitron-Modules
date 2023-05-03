#include <stdio.h>

int myLen(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    printf("%d", myLen(s));
    return 0;
}