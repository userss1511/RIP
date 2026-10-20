#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;

    int zbir = j + d + s;
    printf("%d\n", zbir);

    return 0;
}
