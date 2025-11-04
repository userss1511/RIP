#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    float y = 2.1;
    double z = 3.21145;
    char c = 's';

    //printf("Sara\n");

    /*printf("%d %c\n", x, c);
    printf("%d\t", x);
    printf("s\n");*/

    // komentar u jednoj liniji
    /* komentar u vise linija */

    int broj;
    //scanf("%d", &broj);
    //printf("%d\n", broj);

    float a = 3;
    float b = 4;
    /*int zbir = a + b;
    int razlika = a - b;
    int proizvod = a * b;
    int kolicnik = a / b;
    int ostatak = a % b;*/
    float a1 = 1.23;
    float b1 = 2.44;
    printf("%f", a/b);

    //          >   <    >=     <=    ==     !=   -> operatori poredjenja
    //          && AND    || OR   ! negacija -> logicki operatori

    if(a > b) {
        printf("a vece od b");
        a = a + 1;
    }


    a++;
    a = a + 1;
    a += 1;
    a *= 3;

    return 0;
}
