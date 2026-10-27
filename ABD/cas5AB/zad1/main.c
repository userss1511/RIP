#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    scanf("%d.%d.%d.", &d, &m, &g);

    int noviD, noviM, novaG;
    noviD = d;
    noviM = m;
    novaG = g;

    // 31 dan -> jan mart maj jul avg okt
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
        // mjeseci imaju 31 dan
        if(d == 31) {
            // poslednji dan u mjesecu
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    // 30 dana -> april jun sept nov
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d == 30) {
            // poslednji dan u mjesecu
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    // decembar
    if(m == 12) {
        if(d == 31) {
            // poslednji dan u godini
            noviD = 1;
            noviM = 1;
            novaG = g + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    // februar
    if(m == 2) {
        // godina prestupna ?
        if((g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0))) {
            // godina je prestupna, februar ima 29 dana
            if(d == 29) {
                noviD = 1;
                noviM = 3;
            }
            else {
                noviD = d + 1;
            }
        }
        else {
            // godina nije prestupna, februar ima 28 dana
            if(d == 28) {
                noviD = 1;
                noviM = 3;
            }
            else {
                noviD = d + 1;
            }
        }
    }

    printf("%d.%d.%d.", noviD, noviM, novaG);
    return 0;

}
