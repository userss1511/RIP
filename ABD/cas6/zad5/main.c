#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int brD = 0;

    for(int d = 1; d <= n; d++) {
        if(n % d == 0) {
            brD = brD + 1;
        }
    }

    if(n == 1) {
        printf("Broj nije ni prost ni slozen!\n");
    }
    else {
        if(brD == 2) {
            printf("Broj je prost!\n");
        }
        else {
            printf("Broj je slozen!\n");
        }
    }
    return 0;
}
