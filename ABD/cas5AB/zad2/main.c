#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brBodova;
    scanf("%d", &brBodova);

    if(brBodova >= 50) {
        printf("Polozio\n");
    }
    else {
        printf("Pao\n");
    }

    // ternarni operator
    printf(brBodova >= 50 ? "Polozio\n" : "Pao\n");

    // apsolutna vrijednost broja
    int x;
    scanf("%d", &x);
    int apsX = x >= 0 ? x : -x;
    printf("%d\n", apsX);
    printf("%d\n", abs(x));  // ugradjena funkcija za apsolutnu vrijednost nekog broja


    return 0;
}
