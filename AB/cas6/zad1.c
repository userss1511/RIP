#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cif1 = -1;
    int cif2 = -1;

    bool ind = true;
    while(n > 0){
        int cif = n % 10;
        if(cif1 == -1){
            cif1 = cif;
        }
        else {
            if(cif2 == -1 && cif != cif1){
                cif2 = cif;
            }
            else if(cif != cif1 && cif != cif2){
                //broj nije dvojak
                ind = false;
                break;
            }
        }
        n = n / 10;
    }

    if(ind == true){
        printf("Broj je dvojak!\n");
    }
    else {
        printf("Broj nije dvojak!\n");
    }


    return 0;
}
