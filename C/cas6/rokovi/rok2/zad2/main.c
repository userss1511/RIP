#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    while(b % c != 0) {
        int d = b % c;
        b = c;
        c = d;
    }

    // nzd(b, c) = rezultat c nakon while
    while(a % c != 0) {
        int d = a % c;
        a = c;
        c = d;

    }

    printf("%d\n", c);
    return 0;
}
