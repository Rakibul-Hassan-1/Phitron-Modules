#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = k - 1;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (i == j)
        {
            printf("%d ", mn);
            j += k;
            mn = INT_MAX;
        }
    }
    if (n % k != 0)
    {
        printf("%d ", mn);
    }
    return 0;
}