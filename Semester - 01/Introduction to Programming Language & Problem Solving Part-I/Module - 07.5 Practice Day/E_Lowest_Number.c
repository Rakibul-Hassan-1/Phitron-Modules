#include <stdio.h>
int main()
{
    long int N;
    scanf("%ld", &N);
    if (N >= 2)
    {
        int array[N], i, small, position = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
        }
        small = array[0];
        for (i = 0; i < N; i++)
        {

            if (small > array[i])
            {
                small = array[i];
                position = i;
            }
        }
        printf("%d %d", small, position + 1);
    }
}