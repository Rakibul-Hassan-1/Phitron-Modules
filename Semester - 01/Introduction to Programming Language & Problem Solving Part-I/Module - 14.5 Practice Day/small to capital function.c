#include <stdio.h>

void small_to_capital(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("Select only small letter!");
    }
}

int main()
{
    char ch;
    scanf("%c", &ch);
    small_to_capital(ch);

    return 0;
}