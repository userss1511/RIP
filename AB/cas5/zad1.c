#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*24 10 2025 -> 25 10 2025
    31 1 2025 -> 1 2 2025
    30 4 2025 -> 1 5 2025
    29 -> prestupna / 28 -> nije prestupna
    31 12 2025 -> 1 1 2026

    m = 1 || m = 3 || m = 5 || m = 7 || m = 8 || m = 10
    m = 4 || m = 6 || m = 9 || m == 11
    m = 12
    m = 2
   ((g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0)))*/

   int d, m, g;
   scanf("%d %d %d", &d, &m, &g);
   int noviD = d;
   int noviM = m;
   int novaG = g;

   if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
    if(d +1 > 31){
        noviD = 1;
        noviM = m + 1;
    }
    else {
        noviD = d + 1;
    }
   }

   if(m == 4 || m == 6 || m == 9 || m == 11){
    if(d + 1 > 30){
        noviD = 1;
        noviM = m + 1;
    }
    else {
        noviD = d + 1;
    }
   }

   if(m == 12){
    if(d + 1 > 31){ //31.12.
        noviD = 1;
        noviM = 1;
        novaG = g + 1;
    }
    else {
        noviD = d + 1;
    }
   }
   if(m == 2){
    if((g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0))){
        //godina prestupna, februar ima 29 dana
        if(d + 1 > 29){
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
    }
    else {
        //godina nije prestupna / februar ima 28 dana
        if(d + 1 > 28){
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = noviD + 1;
        }
    }
   }

   printf("%d.%d.%d.\n", noviD, noviM, novaG);

    return 0;
}
