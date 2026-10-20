#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Napomena
    // komentar1
    /*
    viselinijski komentar
    komentar1
    komentar2
    .
    .
    .
    komentar100
    */
    int x = 2; // cijeli brojevi
    float y = 2.31; // decimalni brojevi
    double z = 4.212121; // decimalni brojevi
    // razlika izmedju float i double se ogleda u preciznosti
    char c = 's'; // karakter

    int x1 = 1;
    int x2 = 3;
    /*printf("Racunari i programiranje\n");
    printf("Analiza 1\n");
    printf("x = %d\n", x);
    // printf("%d %d\n", x1, x2);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
    printf("%d %f %f\n", x, y, z);
    printf("%c\n", c);*/

    int br1;
    scanf("%d", &br1);
    printf("%d\n", br1);

    float br2;
    scanf("%f", &br2);
    printf("%f\n", br2);

    double br3;
    scanf("%lf", &br3);
    printf("%f\n", br3);


    /// Aritmeticki operatori
    /*
        + ---> sabiranje
        - ---> oduzimanje
        * ---> mnozenje
        / ---> dijeljenje
        % ---> ostatak prilikom dijeljenja

        3 / 2 = 1 --> div
        int / int ---> int
        3.0 / 2.0 = 1.5
        double / double ---> double
        int / double ---> double
        double / int ---> double
        4 / 5.0
        (double) 4 / 5
        int x;
        int y;
        (double) x / y ---> double

        5 % 2 = 1 (5 = 2*2 + 1)
        4 % 2 = 0 (4 = 2*2 + 0)
    */

    /// Operatori poredjenja
    /*
        > - vece od
        < - manje od
        >= - vece ili jednako od
        <= - manje ili jednako od
        == - jednako
        != - nije jednako

    */

    /// Logicki operatori
    /*
        && - AND, I
        || - OR, ILI
        ! - NOT, NEGACIJA

    */

/*
    i++;
    ++i;
    i = i + 1;
    i += 1;
    i *= 10; i = i * 10;
    i--;
    i -= 20; i = i - 20;

*/
/*
    if(a > b) {
        printf("a je vece od b");
        a = a + 1;
    }
    else {
        printf("b je vece od a");
        b = b + 1;
    }

    */
    return 0;
}
