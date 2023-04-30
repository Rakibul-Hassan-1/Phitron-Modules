#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    int flag = 0;
    scanf("%d", &target);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                flag = 1;
            }
                }
    }
    if(flag==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}