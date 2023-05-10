#include <stdio.h>

int main()
{
    int row, col;
    int count = 0, sum_primary = 0, sum_secondary = 0;

    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                sum_primary += arr[i][j];
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    printf("%d ", sum_primary);

    return 0;
}