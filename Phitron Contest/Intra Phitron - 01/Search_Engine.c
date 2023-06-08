#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int key, value = 0;
        scanf("%d", &key);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                value = i + 1;
                break;
            }
            else
            {
                value = 0;
            }
        }

        printf("Case %d: ", i);
        if (value > 0)
        {
            printf("%d\n", value);
        }
        else
        {
            printf("Not Found\n");
        }
    }

    return 0;
}