#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Naci broj cifara unijetog broja
    int n;
    scanf("%d", &n);
    int brojCifara = 0;
    int n1 = n;
    int suma = 0;
    int n2 = n;

    while(n1 > 0){
        brojCifara = brojCifara + 1;
        n1 = n1 / 10;
    }

    while(n2 > 0){
        int cif = n2 % 10;
        suma = suma + pow(cif, brojCifara);
        n2 = n2 / 10;
    }

    if(suma == n){
        printf("Broj je Armstrongov!\n");
    }
    else {
        printf("Broj nije Armstrongov!\n");
    }
    return 0;
}
