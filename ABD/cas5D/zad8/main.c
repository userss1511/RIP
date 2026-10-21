#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*bool ind1 = true;  // 1
    bool ind2 = false; // 0
    printf("%d", ind1);*/
    bool ind = false;

    while(n > 10) {
        int cif1 = n % 10;
        int cif2 = (n / 10) % 10;
        if(cif1 == cif2) {
            ind = true;
            break;
        }
        n = n / 10;
    }

    if(ind == 1) {
        printf("Nasli smo bar dvije jednake uzastopne cifre\n");
    }
    else {
        printf("Nismo nasli dvije jednake uzastopne cifre\n");
    }
    return 0;
}
