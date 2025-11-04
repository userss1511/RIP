#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Učitati trocifreni cijeli broj i ispisati zbir njegovih cifara.
    int n = 123;
    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;
    int zbirCif = j + d + s;
    printf("%d", zbirCif);
    return 0;
}
