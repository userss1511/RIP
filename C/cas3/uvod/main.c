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
    return 0;
}
