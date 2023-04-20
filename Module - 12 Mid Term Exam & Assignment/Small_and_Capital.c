#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int capitanCounter = 0, smallCounter = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 91)
        {
            capitanCounter++;
        }
        else
        {
            smallCounter++;
        }
    }
    printf("%d %d", capitanCounter, smallCounter);

    return 0;
}