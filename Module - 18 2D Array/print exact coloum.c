#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][e]);
    }

    return 0;
}
