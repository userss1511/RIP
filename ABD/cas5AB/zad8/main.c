#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    bool ind = false;

    while(n > 10) {
        int cif1 = n % 10;
        int cif2 = (n / 10) % 10;

        if(cif1 == cif2) {
            // nasli dvije uzastopne jednake cifre
            ind = true;
            break;
        }
        n = n / 10;
    }

    if(ind == true) { // ind == 1
        printf("Nasli smo bar dvije uzastopne cifre koje su jednake!\n");
    }
    else {
        printf("Nismo nasli uzastopne cifre koje su jednake!\n");
    }

    return 0;
}
