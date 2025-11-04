#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brojac = 0;
    int polozili = 0;
    int pali = 0;

    while(brojac < 10){
        int x;
        scanf("%d", &x);
        if(x == 1){
            polozili = polozili + 1;
        }
        else if(x == 0){
            pali = pali + 1;
        }
        else {

        }
        brojac = brojac + 1;
    }

    printf("Broj studenata koji su polozili ispit: %d\n", polozili);
    printf("Broj studenata koji su pali ispit: %d\n", pali);

    if(polozili > 8){
        printf("Povecati platu profesoru!\n");
    }

    return 0;
}
