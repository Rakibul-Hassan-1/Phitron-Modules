#include <stdio.h>
int main()
{
    char s[1001];
    int capital_count, small_count, space_count;
    capital_count = small_count = space_count = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital_count++;
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small_count++;
        }

        else if (s[i] == 32)
        {
            space_count++;
        }
    }

    printf("Capital - %d\n", capital_count);
    printf("Small - %d\n", small_count);
    printf("Spaces - %d\n", space_count);

    return 0;
}
