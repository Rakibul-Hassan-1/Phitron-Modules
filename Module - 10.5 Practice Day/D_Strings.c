#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    printf("%d %d\n", strlen(a), strlen(b));

    char ab[22];
    strcpy(ab, a);
    strcat(ab, b);
    printf("%s\n", ab);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}
