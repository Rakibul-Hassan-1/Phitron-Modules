#include <stdio.h>
int main()
{

    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && 'Z' >= ch)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (ch >= 'a' && 'z' >= ch)
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (ch >= '0' && '9' >= ch)
    {
        printf("IS DIGIT");
    }
    else
        printf("Invalid");
}