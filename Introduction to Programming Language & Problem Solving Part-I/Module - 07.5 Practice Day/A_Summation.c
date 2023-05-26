#include <stdio.h>
int main()
{

    long long int i, sum = 0, N;

    scanf("%lld", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {

        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }

    if (sum >= 0)
    {
        printf("%lld", sum);
    }
    else
    {
        sum = sum * -1;
        printf("%lld", sum);
    }

    return 0;
}