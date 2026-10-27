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
            // student je pao
            pali = pali + 1;
        }

        else {
            // sve sto nije 1 ili 0
            printf("Nije ucitana dobra vrijednost!\n");
            break;
        }
        i = i + 1;
    }

    printf("Polozili: %d\n", polozili);
    printf("Pali: %d\n", pali);
    printf(polozili > 8 ? "Povecati platu profesoru!\n" : "");
    return 0;
}
