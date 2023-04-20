#include <stdio.h>

int main()
{
    int n, keyValue,count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &keyValue);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == keyValue)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", count);
    }

    return 0;
}