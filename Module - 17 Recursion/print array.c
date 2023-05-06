#include <stdio.h>

void fun(int arr[], int n, int i)
{
    if (i == n) // base case its of when i is equal to n
        return;
    printf("%d ", arr[i]);
    fun(arr, n, i + 1);
}

int main()
{
    int arr[3] = {5, 6, 9};
    fun(arr, 3, 0);

    return 0;
}