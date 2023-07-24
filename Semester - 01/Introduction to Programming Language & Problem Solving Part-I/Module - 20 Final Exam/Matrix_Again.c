#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (j = 0; j < m; j++)
    {
        printf("%d ", arr[n - 1][j]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i][m - 1]);
    }

    return 0;
}
