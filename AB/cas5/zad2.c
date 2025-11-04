#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brBodova;
    scanf("%d", &brBodova);

    /*if(brBodova > 50) {
        printf("Student polozio ispit!\n");
    }
    else {
        printf("Student nije polozio ispit!\n");
    }*/

    //printf(brBodova > 50 ? "Polozio!\n" : "Pao!\n");
    printf(brBodova % 2 == 0 ? "Paran broj!\n" : "Neparan broj!\n");
    return 0;
}
