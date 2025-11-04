#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*m = 1, m = 3, m = 5, m = 7, m = 8, m = 10 // dani koji imaju 31 dan
    m = 12 // 31 dan
    m = 4, m = 6, m = 9, m = 11 // dani koji 30 dana
    m = 2 // 29 ili 28 dana (prestupna godina)*/
    int d, m, g;
    scanf("%d %d %d", &d, &m, &g);
    //int -> %d
    //float -> %f
    //double -> %lf
    int noviD = d;
    int noviM = m;
    int novaG = g;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
        if(d + 1 > 31){
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
        if(d + 1 > 31){
            noviD = 1;
            noviM = 1;
            novaG = g + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    if(m == 2){
        if((g % 400 == 0) || ((g % 4 == 0) &&(g % 100 != 0))){ //imamo 29 dana
            if(d + 1 > 29){
                noviD = 1;
                noviM = 3;
            }
            else {
                noviD = d + 1;
            }
        }
        else { //imamo 28 dana
            if(d + 1 > 28){
                noviD = 1;
                noviM = 3;
            }
            else {
                noviD = d + 1;
            }
        }
    }


    printf("%d.%d.%d.\n", noviD, noviM, novaG);
    return 0;
}
