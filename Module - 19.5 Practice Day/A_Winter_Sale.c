#include <stdio.h>
#include <math.h>

int main()
{
    int X, P;
    scanf("%d %d", &X, &P);
    double original_price = P / (1.0 - X / 100.0);
    printf("%.2f", ceil(original_price * 100) / 100);
    return 0;
}
