#include <stdio.h>

int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++; // charecter to integer converting
    }
    for (char i = 'a'; i <= 'z'; i++)

    {
        if (count[i - 97] > 0)
            printf("%c : %d\n", i, count[i - 'a']); //charecter to integer print
        }

    return 0;
}