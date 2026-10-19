#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int j = n % 10;
    int d = (n / 10) % 10;
    int s = n / 100;

    int noviBr = j*100 + d*10 + s;
    printf("%d\n", noviBr);

    return 0;
}
