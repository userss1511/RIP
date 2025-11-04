#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int zbirCifara = 0;

    while(n > 0){
        int cif = n % 10;
        zbirCifara = zbirCifara + cif;
        n = n / 10;
    }

    printf("%d", zbirCifara);
    return 0;
}
