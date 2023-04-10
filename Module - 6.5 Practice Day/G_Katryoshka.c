#include <stdio.h>

int main()
{
    int eye, mouth, body, count = 0;
    scanf("%d%d%d", &eye, &mouth, &body);

    if (eye == 2 && body == 1)
    {
        count++;
    }
    if (eye == 2 && mouth == 1 && body == 1)
    {
        count++;
    }
    if (eye == 1 && mouth == 1 && body == 1)
    {
        count++;
    }

    return 0;
}