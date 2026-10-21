#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int polozili = 0;
    int pali = 0;

    while(i <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        if(ocjena == 1) {
            // student je polozio
            polozili = polozili + 1;
        }
        else if(ocjena == 0) {
            pali = pali + 1;
        }
        else {
            printf("Pogresan unos!\n");
        }
        i = i + 1;
    }

    printf("Broj studenata koji su polozili je: %d\n", polozili);
    printf("Broj studenata koji su pali je: %d\n", pali);

    if(polozili > 8) {
        printf("Povecati platu profesoru!\n");
    }
    return 0;
}
