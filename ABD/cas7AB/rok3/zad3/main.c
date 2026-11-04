#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int br = n;
    for(int i = 1; i <= n; i++) {
        // stampa razmaka
        for(int j = 1; j < i ; j++) {
            printf("  ");
        }

        for(int j = 1; j < 2*br; j++) {
            printf("%d ", j);
        }
        br--;
        printf("\n");
    }
    return 0;
}
