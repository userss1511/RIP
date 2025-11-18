#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    ///Petar je posmatrao fudbalsku utakmicu i na papiru zapisivao rezultat sa semafora nakon svakog gola. Npr. mogući zapis je: 1:0, 1:1, 1:2, 2:2, 2:3.
    ///Zatim je Petar sabrao sve zapisane brojeve: 1+0+1+1+1+2+2+2+2+3=15. Na osnovu datog zbira, napišite program koji određuje koliko je golova bilo na utakmici.

    int S;
    scanf("%d", &S);

    int n = (-1 + sqrt(1 + 8 * S)) / 2;

    printf("Ukupan broj golova je: %d\n", n);

    return 0;
}
