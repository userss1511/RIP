#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Napisati program koji učitava temperaturu izraženu u
    //Celzijusima i ispisuje njenu vrijednost u Farenhajtima, po formuli: F = C*1.8+32.

    double c;
    scanf("%lf", &c);
    double f = c*1.8 + 32;
    printf("%f\n", f);
    return 0;
}
