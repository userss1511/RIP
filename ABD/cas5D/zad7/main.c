#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int minCif = 10;
    // da se trazio max
    // int maxCif = -1;

    while(n > 0) {
        int cif = n % 10;

        if(minCif > cif) {  // if(maxCif < cif) {
            minCif = cif;   // maxCif = cif;
        }

        n = n / 10;
    }

    printf("%d\n", minCif);
    return 0;
}
