#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // NZD(b, c) = ?
    while(b % c != 0) {
        int d = b % c;
        b = c;
        c = d;
    }

    int nzd = c;
    // printf("%d\n", nzd);

   // NZD(a, nzd) ?
   while(a % nzd != 0) {
        int d = a % nzd;
        a = nzd;
        nzd = d;
   }

   printf("NZD = %d\n", nzd);
    return 0;
}
