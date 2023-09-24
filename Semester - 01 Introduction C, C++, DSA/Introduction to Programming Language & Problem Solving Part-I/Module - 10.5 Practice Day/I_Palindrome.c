#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int n = strlen(s);
    int i, j;

    for (i = 0, j = n - 1; i < j; i++, j--) {
        
        if (s[i] != s[j]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
