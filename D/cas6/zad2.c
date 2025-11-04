#include <stdio.h>
#include <stdlib.h>

int main()
{
    //odstampati prvih 10 brojeva
    //int i;
    /*for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }*/

    int a, b;
    scanf("%d %d", &a, &b);

    //zadatak a)
    /*for(int i = 0; i < b; i++) { //redove/vrste
        for(int j = 0; j < a; j++){ //kolone
            printf("*");
        }
        printf("\n");
    }*/


    //zadatak b)
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(i == 0 || i == b-1){
                //prva i poslednja vrsta su u pitanju
                printf("*");
            }
            else {
                if(j == 0 || j == a-1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
