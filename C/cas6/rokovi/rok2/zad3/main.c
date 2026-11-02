#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // gornji dio trougla
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // donji dio trougla
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
