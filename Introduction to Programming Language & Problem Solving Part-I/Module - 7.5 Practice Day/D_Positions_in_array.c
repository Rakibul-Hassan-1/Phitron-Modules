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

        if (arr[i] <= 10)
        {
            printf("A[%ld] = %ld\n", i, arr[i]);
        }
    }

    return 0;
}