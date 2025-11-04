#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Učitati trocifreni cijeli broj i ispisati ga u obrnutom redoslijedu cifara.

    int n = 501;
    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;
    int noviBroj = j*100 + d*10 + s;
    printf("%d", noviBroj);
    return 0;
}
