#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Izracunati koliko cifara ima neki unijeti broj
    int n;
    scanf("%d", &n);
    int n1 = n;
    int n2 = n;
    int sumaStepena = 0;
    int brojCifara = 0;

    while(n1 > 0) {
        brojCifara  = brojCifara + 1;
        n1 = n1 / 10;
    }

    while(n2 > 0){
        int cif = n2 % 10;
        sumaStepena = sumaStepena + pow(cif, brojCifara);
        n2 = n2 / 10;
    }

    if(sumaStepena == n){
        printf("Jeste Armstrongov broj!\n");
    }
    else {
        printf("Nije Armstrongov broj!\n");
    }




    return 0;
}
