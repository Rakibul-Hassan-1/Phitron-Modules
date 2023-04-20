#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int oddCounter = 0, evenCounter = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
    }

    printf("%d %d", evenCounter, oddCounter);

    return 0;
}