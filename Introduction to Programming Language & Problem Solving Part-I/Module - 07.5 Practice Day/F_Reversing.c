#include <stdio.h>
long long int A[9];
int main()
{
    int i;
    long int n;
    scanf("%ld", &n);
    long int arr[n];

    for (i = 0; i < n; i++)
        scanf("%ld", &arr[i]);

    for (i = n - 1; i >= 0; i--)
        printf("%ld ", arr[i]);

    return 0;
}
