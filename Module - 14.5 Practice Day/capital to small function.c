#include <stdio.h>

void small_to_capital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("Select only capital letter!");
    }
}

int main()
{
    char ch;
    scanf("%c", &ch);
    small_to_capital(ch);

    return 0;
}