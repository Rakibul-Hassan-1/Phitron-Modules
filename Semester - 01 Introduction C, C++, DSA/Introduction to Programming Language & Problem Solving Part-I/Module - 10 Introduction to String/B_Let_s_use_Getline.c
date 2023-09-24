#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int count = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\\')
        {
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}
