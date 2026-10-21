#include <stdio.h>
#include <stdlib.h>

int main()
{
   int d, m, g;
   scanf("%d.%d.%d.", &d, &m, &g);
   // printf("%d %d %d\n", d, m, g);
   int noviD, noviM, novaG;
   noviD = d;
   noviM = m;
   novaG = g;

   // 31 dan 1 3 5 7 8 10
   // 30 dana 4 6 9 11
   // decembar 12
   // februar 2

   //imaju 31 dan
   if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
        if(d == 31) {
            // poslednji dan u mjesecu
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
   }

   // imaju 30 dana
   if(m == 4 || m == 6 || m == 9 || m == 11) {
    if(d == 30) {
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
            noviD = 1;
            noviM = 1;
            novaG = g + 1;
        }
       else {
            noviD = d + 1;
       }
   }

   if(m == 2) {
    // godina prestupna -> 29 dana
    if((g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0))) {
        if(d == 29) {
            noviD = 1;
            noviM = 3;
        }
        else {
            noviD = d + 1;
        }
    }

    // godina nije prestupna -> 28 dana
    else {
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
