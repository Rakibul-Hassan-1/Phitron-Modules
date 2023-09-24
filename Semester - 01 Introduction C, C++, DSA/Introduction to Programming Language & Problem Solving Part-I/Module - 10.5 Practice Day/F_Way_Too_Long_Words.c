#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int count = 0;
        char s[100];
        scanf("%s",s);
        int value = strlen(s);
        if (value <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c",s[0]);
            for (int i = 0;i<value; i++)
            {
             printf("%d",value-2);
             break;
            }
             printf("%c\n",s[value-1]);
        }
        
    }

    return 0;
}