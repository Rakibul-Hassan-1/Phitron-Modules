#include <stdio.h>
#include <math.h>

int main()
{
    int m1, m2, day;
    scanf("%d%d%d", &m1, &m2, &day);

    int value = ceil((double)m1 * day / m2);

    printf("%d\n", value);
    return 0;
}
