#include <stdio.h>

int main()
{
    char s[1001];
    int n;
    scanf("%d%s", &n, s);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}