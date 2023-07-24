#include <stdio.h>

int sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[n-1] + sum(arr, n-1);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum(arr, n));
    return 0;
}
