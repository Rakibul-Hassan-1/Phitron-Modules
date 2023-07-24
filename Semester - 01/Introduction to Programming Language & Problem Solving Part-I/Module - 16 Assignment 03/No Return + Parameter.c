// 3. No Return + Parameter
#include <stdio.h>

void meew(char arr[])
{
    printf("%s", arr);
}

int main()
{
    char arr[1001];
    scanf("%s", arr);
    meew(arr);
    return 0;
}