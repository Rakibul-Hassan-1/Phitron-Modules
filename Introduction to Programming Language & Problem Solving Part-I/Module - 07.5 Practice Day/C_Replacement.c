#include <stdio.h>

int main()
{
    long int n, i;
    scanf("%ld", &n);
    long int arr[n];

    for (i = 0; i < n; i++)
    {

        scanf("%ld", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
            printf("%ld ", arr[i]);
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
            printf("%ld ", arr[i]);
        }
        else if (arr[i] == 0)
        {
            arr[i] = 0;
            printf("%ld ", arr[i]);
        }
    }

    return 0;
}