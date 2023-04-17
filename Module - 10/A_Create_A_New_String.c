#include <stdio.h>

int main()
{
    char s[1000], t[1000];
    int s_count = 0, t_count = 0;
    scanf("%s%s", s, t);

    for (int i = 0; s[i] != '\0'; i++)
    {
        s_count++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {

        t_count++;
    }
    printf("%d %d\n%s %s", s_count, t_count, s, t);

    return 0;
}