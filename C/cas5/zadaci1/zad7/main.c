#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    bool ind = false; // false -> 0, true -> 1

    while(n > 10) {
        int cif1 = n % 10;
        int cif2 = (n / 10) % 10;

        if(cif1 == cif2) {
            ind = true;
            break;
        }
        n = n / 10;
    }

    if(ind == true) {
        printf("U broju postoje bar dvije uzastopne cifre iste vrijednosti!\n");
    }
    else {
        printf("U broju ne postoje dvije uzastopne cifre iste vrijednosti!\n");
    }

    return 0;
}
