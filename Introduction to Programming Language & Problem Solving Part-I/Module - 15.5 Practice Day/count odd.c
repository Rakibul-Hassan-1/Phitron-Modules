#include <stdio.h>

int countOdd(int size, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", countOdd(n, arr));

    return 0;
}