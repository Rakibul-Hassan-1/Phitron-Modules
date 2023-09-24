#include <stdio.h>

int max(int arr[], int size)
{
    int maxi = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (maxi > arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int min(int arr[], int size)
{
    int mini = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (mini < arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d", max(arr, size), min(arr, size));

    return 0;
}