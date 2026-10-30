#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;  // a = 8, b = 4
    scanf("%d %d", &a, &b);

    // a)
    for(int j = 1; j <= b; j++) {
        for(int i = 1; i <= a; i++) {
            printf("*");
        }
        printf("\n");
    }

  printf("\n");

    // b)
    for(int j = 1; j <= b; j++) {
        for(int i = 1; i <= a; i++){
            if(i == 1 || i == a || j == 1 || j == b) {
                // nalazimo se na ivicama
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }



    return 0;
}
