#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int x = 5;
    float y = 1.21;
    double z = 3.21221;
    char c = 'a';

    //printf("Programiranje\n");
    /*printf("A i B smjer\n");
    printf("PMF\n");*/

    printf("%d\n", x);
    printf("%f\n", z);
    printf("%c\n", c);
    printf("Promjenljive su: %d %f %c\n", x, y, c);

   /*float broj;
    scanf("%f", &broj);
    printf("%f\n", broj);*/

    //Aritmeticki operatori
    int a = 2;
    int b = 3;
    int zbir = a + b;
    int razlika = a - b;
    int proizvod = a * b;
    int kolicnik = a / b;
    double a1 = 2.0;
    double b1 = 3.0;
    double kolicnik1 = a1/b;
    printf("%f\n", kolicnik1);
    int ostatak = a % b; //mod
    printf("%d", ostatak);

    //Operatori poredjenja
    // >    <    >=     <=    ==    !=

    //bool -> true(1) false(0)

    //Logicki operatori
    /*&& -> AND
    ||  -> OR
    ! -> negation */

    if(a > b) {
        printf("a je vece od b\n");
        printf("b je manje od a\n");
    }

    else if(a < b){
        printf("b je vece od a\n");
        printf("a je manje od b\n");
    }
    else {
        printf("a je jednako b\n");
    }


    return 0;
}
