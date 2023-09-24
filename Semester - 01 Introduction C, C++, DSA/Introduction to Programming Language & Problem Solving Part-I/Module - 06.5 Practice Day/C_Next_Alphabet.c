#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch < 'z')
    {
        printf("%c", ch + 1);
    }
    if(ch=='z'){
         printf("a");
    }
    

    return 0;
}