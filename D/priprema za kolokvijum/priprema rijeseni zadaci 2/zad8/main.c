#include <stdio.h>
#include <stdlib.h>

int main()
{
   ///Napisati kod koji štampa sve cijele brojeve iz intervala [a, b] koji su oblika 3k + 1, za neko cjelobrojno k.

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i % 3 == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
