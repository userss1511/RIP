#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Učitati trocifreni cijeli broj i ispisati ga u obrnutom redoslijedu cifara.
    int n;
    scanf("%d", &n);

    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;

    int noviBroj = j*100 + d*10 + s;
    printf("%d\n", noviBroj);

    return 0;
}
