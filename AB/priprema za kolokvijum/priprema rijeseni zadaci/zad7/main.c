#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cifra, min = 9, max = 0;
    int temp = n;

    while (temp > 0) {
        cifra = temp % 10;
        if (cifra > max) max = cifra;
        if (cifra < min) min = cifra;
        temp /= 10;
    }

    int zbir = min + max;
    printf("%d\n", zbir);

    return 0;
}
