#include <stdio.h>

int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = x + y;
    return result;
}

int main()
{
    int value = sum();
    printf("%d", value);

    return 0;
}
