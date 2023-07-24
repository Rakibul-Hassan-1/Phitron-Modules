#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < k; i++)  
    {
        for (int i = 1; i <=n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}