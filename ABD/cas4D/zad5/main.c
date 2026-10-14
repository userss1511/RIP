#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    /* if(a > b) {
        printf("Promjenljiva a je veca od promjenljive b\n");
    }

    if(a < b) {
        printf("Promjenljiva a je manja od promjenljive b\n");
    }

    if(a == b){
        printf("Promjenljive a i b su jednake\n");
    }  */

    if(a > b){
        printf("Promjenljiva a je veca od promjenljive b\n");
    }
    else if (a < b){
        printf("Promjenjiva a je manja od promjenljive b\n");
    }
    else {
        printf("Promjenljive a i b su jednake\n");
    }
    return 0;
}
