#include <stdio.h>

int main()
{
    int n, max, min, count = 0, count2 = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0]; // 1 2 3
    min = arr[0]; // 1 2 3

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {

            max = arr[i];
            count += i;
        }
        if (min > arr[i])
        {

            min = arr[i];
            count2 += i;
        }
    }

    int temp = arr[count2];
    arr[count2] = arr[count];
    arr[count] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}