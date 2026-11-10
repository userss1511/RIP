#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double kvadrat(double x) {
    // double rez = x*x;
    // return rez;
    return x*x;

}

int zbir(int a, int b) {
    return a + b;
}

void ispisiZbir(int a, int b) { // procedura
    int zbir = a + b;
    printf("%d\n", zbir);
}

int znak1(int x) {
    if(x > 0) return 1;
    if(x < 0) return -1;
    return 0;
}

int znak(int x) {
    if(x > 0) return 1;
    else if(x < 0) return -1;
    else return 0;
}

int veci(int a, int b) {
    if(a > b) return a;
    else return b;
}

int apsolutno(int x) {
return x >= 0 ? x : -x;
}

int apsolutnoBezTernarnog(int x) {
if(x >= 0) return x;
else return -x;
}

int paran(int x) {
    if(x % 2 == 0) return 1;
    else return 0;
}

int sumaCif(int n) {
int suma = 0;

    while(n > 0) {
        int cif = n % 10;
        suma = suma + cif;
        n = n / 10;
    }
    // printf("%d\n", n);
    // radi se sa kopijom promjenljive n
    return suma;
}

bool prost(int n) {
    int brD = 0;

    for(int d = 2; d <= n-1; d++) {
        if(n % d == 0) brD++;
    }

    if(brD == 0 && n != 1) return true;
    else return false;
}

int sumaProstih(int n) {
    int suma = 0;
    for(int i = 1; i <= n; i++) {
        if(prost(i)) { // if(prost(i) == 1)
            suma = suma + i;
        }
    }

    return suma;
}

void faktorijel(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    printf("%d\n", f);
}


int main()
{
    /* double n;
    scanf("%lf", &n);
    // double rez = kvadrat(n);
    printf("%.2f\n", kvadrat(n));

    for(int i = 1; i <= 10; i++) {
        //double rez = i*i;
        printf("%f\n", kvadrat(i));
    } */

    /* int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", zbir(a, b)); */
    // ispisiZbir(5, 10);
    // printf("%d\n", znak1(6));
    // printf("%d\n", veci(9, 9));
    /* int x;
    scanf("%d", &x);
    printf("%d\n", abs(x)); */
    // printf("%d\n", apsolutno(-6));
    // printf("%d\n", paran(8));
    /* int n = 123;
    printf("%d\n", sumaCif(n));
    printf("%d\n", n); */

    // printf("%d\n", prost(55));
    // printf(prost(5) == 1 ? "True\n" : "False\n");

    /* for(int i = 1; i <= 100; i++) {
        if(prost(i) == 1)
            printf("%d\n", i);
    } */

    // printf("%d\n", sumaProstih(10));
    // faktorijel(6);
    return 0;
}
