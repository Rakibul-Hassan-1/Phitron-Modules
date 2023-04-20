#include <stdio.h>

int main()
{
    int n, digit, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &digit); // The %1d format specifier is used to read in only one digit at a time
        sum += digit;
    }
    printf("%d\n", sum);
    return 0;
}
