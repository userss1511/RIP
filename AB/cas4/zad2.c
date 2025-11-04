#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Učitati trocifreni cijeli broj i ispisati zbir njegovih cifara.
    int n;
    scanf("%d", &n);

    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;
    int zbirCif = j + d + s;

    printf("%d\n", zbirCif);
    return 0;
}
