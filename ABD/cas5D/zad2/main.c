#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brBodova;
    scanf("%d", &brBodova);

    if(brBodova >= 50) {
        printf("Student je polozio!\n");
    }
    else {
        printf("Student nije polozio!\n");
    }

    // ternarni operator
    printf(brBodova >= 50 ? "Student je polozio!\n" : "Student nije polozio!\n");

    int x = 5;
    int rez = x > 0 ? x : -x;
    printf("%d\n", rez);

    return 0;
}
