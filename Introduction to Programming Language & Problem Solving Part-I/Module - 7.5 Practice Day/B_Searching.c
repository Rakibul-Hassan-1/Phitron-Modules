#include <stdio.h>
int main()
{

    long int i, n, src = -1;

    scanf("%ld", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%ld", &src);

    for (i = 0; i < n; i++)
    {

        if (src == arr[i])
        {
            src = arr[i];

            printf("%ld", i);
            break;
        }
    }
    if (i == n)
    {
        printf("-1");
    }

    return 0;
}