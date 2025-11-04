#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int min = 10;

    while(n > 0){
        int cif = n % 10;
        if(cif < min){
            min = cif;
        }
        n = n / 10;
    }

    printf("Minimalna cifra unijetog broja je %d\n", min);
    return 0;
}
