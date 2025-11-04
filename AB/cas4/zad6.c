#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Učitati dva realna broja i ispisati manji od njih.
    double a = 1.212;
    double b = 3.412;

    if(a > b) {
        printf("Manji broj je: %f\n", b);
    }
    else {
        printf("Manji broj je: %f\n", a);
    }

    return 0;
}
