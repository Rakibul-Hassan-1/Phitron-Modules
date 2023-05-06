#include <stdio.h>

int fun(char arr[], int i)
{
    int count = 0;
    if (arr[i] == '\0')
        return 0;
    count = fun(arr, i + 1);
    return count + 1;
}

int main()
{
    char arr[1001];
    scanf("%s", arr);
    int value = fun(arr, 0);
    printf("%d", value);
    return 0;
}