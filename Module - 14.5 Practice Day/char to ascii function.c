#include <stdio.h>

void charecter_to_ascii(char ch)
{
    printf("%d", ch);
}

int main()
{
    char ch;
    scanf("%c", &ch);
    charecter_to_ascii(ch);
    return 0;
}