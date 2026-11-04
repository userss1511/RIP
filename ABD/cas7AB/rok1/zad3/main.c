#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
/*
    // stampa gornjeg trougla
    for(int i = 1; i <= n; i++) {

        // stampa razmaka
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }

        // stampa brojeva
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    // stampa donjeg trougla
    for(int i = 1; i < n; i++) {
        // stampa razmaka
        for(int j = 1; j <= i; j++) {
            printf(" ");
        }

        // stampa brojeva
        for(int j = 1; j <= n-i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    */

        // stampa gornjeg trougla
    for(int i = 1; i <= n; i++) {

        // stampa razmaka
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }

        // stampa brojeva
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // stampa donjeg trougla
    for(int i = 1; i < n; i++) {
        // stampa razmaka
        for(int j = 1; j <= i; j++) {
            printf(" ");
        }

        // stampa brojeva
        for(int j = 1; j <= n-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
