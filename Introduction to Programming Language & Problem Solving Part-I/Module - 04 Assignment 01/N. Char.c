#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch>96 && ch<123)
    {
        printf("%c", ch - 32);
    }
    else{
        printf("%c", ch+32);
    }
    return 0;
}