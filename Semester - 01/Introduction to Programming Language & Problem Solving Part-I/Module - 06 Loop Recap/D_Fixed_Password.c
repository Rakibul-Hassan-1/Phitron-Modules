#include <stdio.h>
int main()
{
    int X, pass, i;
    pass = 1999;

    while (scanf("%d", &X) != EOF)
    {

        if (X == pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        i++;
    }

    return 0;
}