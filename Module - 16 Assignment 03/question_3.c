#include <stdio.h>

int count_before_zero(int size, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    printf("%d", count_before_zero(num, arr));
    return 0;
}