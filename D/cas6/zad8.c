#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);


    switch(n){

      case 1:
        printf("Podedeljak\n");
        break;

      case 2:
        printf("Utorak\n");
        break;

      case 3:
        printf("Srijeda\n");
        break;

      case 4:
        printf("Cetvrtak\n");
        break;

      case 5:
        printf("Petak\n");
        break;

      case 6:
        printf("Subota\n");
        break;

      case 7:
        printf("Nedelja\n");
        break;

      default:
        printf("Pogresan unos!\n");
        break;
    }

    return 0;
}
