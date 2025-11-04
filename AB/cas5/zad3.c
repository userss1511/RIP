#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumaOcjena = 0;
    double prosjek = 0;
    int brojac = 0;

    while(brojac < 10){
        int ocjena;
        scanf("%d", &ocjena);
        sumaOcjena = sumaOcjena + ocjena;
        brojac = brojac + 1;
    }

    prosjek = sumaOcjena / 10.0;
    //prosjek = ((double) sumaOcjena) / 10;
    printf("%f", prosjek);


    return 0;
}
