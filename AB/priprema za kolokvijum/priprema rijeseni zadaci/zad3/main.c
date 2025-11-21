#include <stdio.h>
#include <stdlib.h>

int main()
{

    ///Zapisati kod koji štampa zbir kvadrata svih neparnih cijelih brojeva iz intervala [a, b].
    int a, b;
    int suma = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            suma += i * i;
        }
    }
    printf("%d\n", suma);

    return 0;
}
