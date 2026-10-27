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
    // ternarni operator (uslovni operator)
    printf(brBodova >= 50 ? "Polozio\n" : "Pao\n");


    // apsolutna vrijednost
    int x;
    scanf("%d", &x);
    int apsV = x > 0 ? x : -x;
    printf("%d\n", apsV);

    return 0;
}
