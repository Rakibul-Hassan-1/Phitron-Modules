#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    char temp[1001];

    int n = strlen(s);
    int i, j;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int value = is_palindrome(s);
    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}