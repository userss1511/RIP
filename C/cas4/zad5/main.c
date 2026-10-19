#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    /*if(a < b) {
        printf("Broj a je manji od broja b\n");
    }
    if(a > b) {
        printf("Broj a je veci od broja b\n");
    }
    if(a == b) {
        printf("Broj a je jednak broju b\n");
    }*/

    if(a < b){
        printf("Broj a je manji od broja b\n");
    }
    else if(a > b){
        printf("Broj a je veci od broja b\n");
    }
    else { // a jednako b
        printf("Broj a je jednak broju b\n");
    }

    return 0;
}
