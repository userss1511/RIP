#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Odstampati prvih 10 brojeva
     /*for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }

    printf("\n");

    for(int i = 10; i >= 1; i--){
        printf("%d ", i);
    }
*/

int a, b;
scanf("%d %d", &a, &b);

//zadatak a)
 /*for(int i = 1; i <= b; i++){  //redove
    for(int j = 1; j <= a; j++){ //kolone
        printf("*");
    }
    printf("\n");
 }*/


 for(int i = 1; i <= b; i++){
    for(int j = 1; j <= a; j++){
        if(i == 1 || i == b){
            //prva i poslednja vrsta
            printf("*");
        }
        else {
            if(j == 1 || j == a){
                //prva i poslednja kolona
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
