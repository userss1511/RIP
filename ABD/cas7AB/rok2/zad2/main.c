#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // NZD(b, c)
    while(b % c != 0) {
        int d = b % c;
        b = c;
        c = d;
    }
    int nzd2 = c;

    // NZD(a, nzd2) ?
    while(a % nzd2 != 0) {
        int d = a % nzd2;
        a = nzd2;
        nzd2 = d;
    }

    printf("%d\n", nzd2);
    return 0;
}
