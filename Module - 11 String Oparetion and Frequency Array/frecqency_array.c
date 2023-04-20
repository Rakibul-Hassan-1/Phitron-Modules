#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        count[value]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %d\n", i, count[i]);
    }

    return 0;
}