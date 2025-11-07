#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(i % 2 == 0){
                if(j == b) printf("#");
                else printf(".");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
