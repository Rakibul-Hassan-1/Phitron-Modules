#include <stdio.h>

int main()
{
    int n, i, j, is_unit = 1;
    scanf("%d", &n);
    int matrix[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);

            if ((i == j && matrix[i][j] != 1))
            {
                is_unit = 0;
            }
            else if ((i != j && matrix[i][j] != 0))
            {
                is_unit = 0;
            }
        }
    }
    if (is_unit == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
