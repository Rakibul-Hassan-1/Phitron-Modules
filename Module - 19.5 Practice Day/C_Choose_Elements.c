#include <stdio.h>

int main()
{
    long long int n, k;
    scanf("%lld%lld", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    /* soting the given array */

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            break;
        }

        sum += arr[i];
    }
    printf("%lld\n", sum);

    return 0;
}