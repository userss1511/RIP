#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br = 1;

    int polozili = 0; // broj studenata koji su polozili
    int pali = 0; // broj studenata koji su pali

    while(br <= 10) {
        int ocjena;
        scanf("%d", &ocjena);

        if(ocjena == 1) {
            polozili = polozili + 1;
        }

        else if(ocjena == 0) {
            pali = pali + 1;
        }

        else {
            printf("Ocjena moze biti 1 ili 0!\n");
            break;
        }

        br = br + 1;

    }

    printf("Polozili: %d\n", polozili);
    printf("Pali: %d\n", pali);
    printf(polozili > 8 ? "Povecati platu profesoru!\n" : "");

    return 0;
}
