#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int c = ceil(x);
    int f = floor(x);
    int r = round(x);
    printf("%d %d %d", c, f, r);

    return 0;
}