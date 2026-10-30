#include <stdio.h>
#include <stdlib.h>

int main()
{
    // stampaj svoje ime 10 puta

   /* for(int i = 1; i <= 10; i++) {
        printf("Sara\n");
    } */

    // odstampati brojeve od 1 do 10

    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // odstamapti brojeve od 10 do 1
    for(int i = 10; i > 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
