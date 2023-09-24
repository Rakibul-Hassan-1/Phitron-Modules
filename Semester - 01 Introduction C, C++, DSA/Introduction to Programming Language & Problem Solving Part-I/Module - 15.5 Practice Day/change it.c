#include <stdio.h>

void changeIt(int size, int arr[])
{
    int temp = arr[size - 1];
    temp = 100;
    arr[size - 1] = temp;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
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
    changeIt(n, arr);

    return 0;
}