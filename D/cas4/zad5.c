#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Napisati program u programskom jeziku C koji učitava dva cijela broja (a i b) i ispisuje rezultate njihovog poređenja.

    int a = 5;
    int b = 10;

    /*if(a > b) {
        printf("a vece od b\n");
    }

    if(a < b) {
        printf("a manje od b\n");
    }

    if(a == b) {
        printf("a jednako b\n");
    }*/

    if(a > b){
        printf("a vece od b\n");
    }
    else if(a < b) {
        printf("a manje od b\n");
    }
    else {
        printf("a jednako b\n");
    }

    return 0;
}
