#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brojac = 0; // < 10
    int suma = 0;
    double prosjek = 0;

    while(brojac < 10){
        int ocjena;
        scanf("%d", &ocjena);
        suma  = suma + ocjena;
        brojac = brojac + 1;
    }

    prosjek = suma / 10.0;
    //prosjek = ((double) suma) / 10;
    printf("%f", prosjek);


    return 0;
}
