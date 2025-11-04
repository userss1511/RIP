#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int min = 10;

    while(n > 0){
        int cif = n % 10;
        if(min > cif){
            min = cif;
        }
        n = n / 10;
    }

    printf("Najmanja cifra broja je %d", min);
    return 0;
}
