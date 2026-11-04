#include <stdio.h>
#include <stdlib.h>

int nazivFunkcije(int a) {
return a;
}

double kvadrat(double x) {
    /* double rez = x*x;
    return rez; */
    return x*x;

}

int zbir(int a, int b) {
    return a + b;
}

int main()
{
    // stampaj sve proste brojeve od a do b
   /* int a, b;
    scanf("%d %d", &a, &b); */

    /* for(int i = a; i <= b; i++) {
        int brD = 0;
        for(int d = 1; d <= i; d++) {
            if(i % d == 0) {
                brD++;
            }
        }
        if(brD == 2 && i != 1) {
            printf("%d\n", i);
        }
    } */

    /* for(int i = a; i <= b; i++) {
        if(prost(i) == true) {
            printf("%d\n", i);
        }
    } */

    /* double n;
    scanf("%lf", &n);
    //double rez = kvadrat(n);
    printf("%.2f\n", kvadrat(n)); */
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", zbir(a, b));
    return 0;
}
