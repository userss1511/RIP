#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
/*
    int br = n;
    for(int i = 1; i <= n; i++) {
        // stampa razmaka
        for(int j = 1; j <= i-1; j++) {
            printf("  ");
        }
        // stampa brojeva
        for(int j = 1; j <= 2*br - 1; j++) {
            printf("%d ", j);
        }
        br--;
        printf("\n");
    }
    */

    // verzija sa zvjezdicom
    int br = n;
    for(int i = 1; i <= n; i++) {
        // stampa razmaka
        for(int j = 1; j <= i-1; j++) {
            printf("  ");
        }
        // stampa brojeva
        for(int j = 1; j <= 2*br - 1; j++) {
            printf("* ");
        }
        br--;
        printf("\n");
    }
    return 0;
}
