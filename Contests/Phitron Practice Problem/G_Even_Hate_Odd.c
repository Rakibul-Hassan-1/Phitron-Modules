#include <stdio.h>
#include <stdlib.h>

int minOperations(int arr[], int n)
{
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    if (evenCount == oddCount)
        return 0;

    if ((evenCount - oddCount) % 2 != 0)
        return -1;

    return abs(evenCount - oddCount) / 2;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int result = minOperations(arr, n);
        printf("%d\n", result);
    }

    return 0;
}
