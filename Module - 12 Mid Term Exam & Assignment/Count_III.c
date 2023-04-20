#include <stdio.h>

int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++;
    }
    for (char i = 97; i <= 122; i++)

    {
        printf("%c - %d\n", i, count[i - 'a']);
    }

    return 0;
}