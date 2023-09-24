#include <stdio.h>

int main()
{
    long long int a, b, c, ans;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &ans);
    long long int mul = a * b * c;
    long long int sub = a - b - c;
    long long int add = a + b + c;
    long long int ms = a * b + c;
    long long int sm = a + b * c;
    long long int mm = a - b * c;
    long long int mm2 = a * b - c;
    long long int mm3 = a + b - c;
    long long int mm4 = a - b + c;
    if (ans == mul || ans == sub || ans == add || ans == ms || ans == sm || ans == mm || ans == mm2 || ans == mm3 || ans == mm4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}