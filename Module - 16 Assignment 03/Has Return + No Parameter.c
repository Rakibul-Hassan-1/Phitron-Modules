// 2. Has Return + No Parameter
#include <stdio.h>

int printSomething()
{
    int hieght, width;
    scanf("%d%d", &hieght, &width);
    int area = hieght * width;
    return area;
}

int main()
{
    printf("%d", printSomething());
    return 0;
}