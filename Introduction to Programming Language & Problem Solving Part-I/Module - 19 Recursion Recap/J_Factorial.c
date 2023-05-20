#include <stdio.h>

long long int fact(long long int x)
{
    // base case
    if (x == 0)
    {
        return 1;
    }
    long long int ans = fact(x - 1);
    return ans * x;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int result = fact(n);
    printf("%lld", result);
    return 0;
}