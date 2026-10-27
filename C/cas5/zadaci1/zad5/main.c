#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int zbirCif = 0;

    while(n > 0) {
        int cif = n % 10;
        zbirCif = zbirCif + cif;
        n = n / 10;
    }

    printf("%d\n", zbirCif);

    return 0;
}
