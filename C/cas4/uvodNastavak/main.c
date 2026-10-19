#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*
    komentar
    u
    vise
    linija

     */
    int x = 2; // cijeli brojevi
    float y = 3.12; // decimalni brojevi
    double z = 4.212121; // decimalni brojevi
    char c = 's'; //karakter

   // printf("Racunari i programiranje\n");
   // printf("Uvod u kompjuterske nauke\n");
    /*printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("c = %c\n", c);
    printf("Nase promjenljive su: %d %f %f %c\n", x, y, z, c);*/

    int br;
    scanf("%d", &br);
    printf("%d\n", br);

    double brDec;
    scanf("%lf", &brDec);
    printf("%f\n", brDec);

    float brDec1;
    scanf("%f", &brDec1);
    printf("%f\n", brDec1);

    /// Aritmeticki operatori
    /*
        + ---> sabiranje
        -  ---> oduzimanje
        *  ---> mnozenje
        /  ---> dijeljenje
        % ---> ostatak prilikom dijeljenja (mod)

        3 / 2 = 1
        int / int ---> int (div)
        3.0 / 2.0 = 1.5
        double / double ---> double
        double / int ---> double
        int / double ---> double

        3.0
        (double) 3
        (int) 5.42 ---> 5

        5 % 2 = 1 (5 = 2*2 + 1) // 5 mod 2 = 1
        4 % 2 = 0 (4 = 2*2 + 0) // 4 mod 2 = 0

    */

    /// Operatori poredjenja
    /*
        > - vece od
        < - manje od
        >= - vece ili jednako od
        <= - manje ili jednako od
        == - jednako
        !=  - nije jednako

    */

    /// Logicki operatori
    /*
        && - AND, I
        ||  - OR, ILI
        !  - NOT, NEGACIJA

    */

    /*
    i = 3;
    i++;
    ++i;
    i = i + 1;
    i += 1;
    i *= 10; isto kao  i = i * 10;
    i--;
    --i;
    i -= 5; isto kao i = i - 5;
    */
/*
    if(a > b) {
        // Da grana
        // dio koda
    }
    else {
        //Ne grana
        // dio koda
    }
    */
/*
    if(a > b) {
        printf("a je vece od b\n");
        a = a + 1;
    }

*/
    return 0;
}
