#include <stdio.h>
int main()
{

    int i, n, max = 0;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {

        scanf("%d", &num[i]);

        if (num[i] > max)
        {
            max = num[i];
        }
    }
    printf("%d", max);

    return 0;
}