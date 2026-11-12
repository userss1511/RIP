#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

double kvadrat(double x) {
    // double rez = x*x;
    // return rez;
    return x*x;
}

int zbir(int a, int b) {
    printf("%d\n", a + b);
    return a + b;
}

void ispisiZbir(int a, int b) {
    int zbir = a + b;
    printf("%d\n", zbir);
}

int znak(int x) { /// x = 0
    if(x > 0) return 1;
    else if(x < 0) return -1;
    else return 0;
}

int znak1(int x) {
    if(x > 0) return 1;
    if(x < 0) return -1;
    if(x == 0) return 0;
}

int veci(int a, int b) {
    if(a > b) return a;
    else return b;
}

int apsolutno(int x) {
    return x >= 0 ? x : -x;
}

int apsolutno1(int x) {
if(x >= 0) return x;
else return -x;

}

int paran(int n) {
    if(n % 2 == 0) return 1;
    return 0;
}

int zbirCifara(int n) {
int sumaCif = 0;

while(n > 0) {
    int cif = n % 10;
    sumaCif = sumaCif + cif;
    n = n / 10;
}

return sumaCif;
}

int brojCif(int n) {
    int brCif = 0;

    while(n > 0) {
        brCif++;
        n = n / 10;
    }
    return brCif;

}

void obrni(int n) {
int brCif = brojCif(n);
int noviBr = 0;

while(n > 0) { /// 123 -> 321
    int cif = n % 10;
    noviBr = noviBr + cif*pow(10, brCif-1);
    brCif--;
    n = n / 10;
}

printf("%d\n", noviBr);
}

bool prost(int n) {
int brD = 0;
    for(int d = 1; d <= n; d++) {
        if(n % d == 0) {
            brD++;
        }
    }
    if(brD == 2) return true;
    else return false;

}

int sumaProstih(int n) {
int suma = 0;
    for(int i = 1; i <= n; i++) {
        if(prost(i)) {
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
    double rez = kvadrat(n);
    printf("%.2f\n", kvadrat(n)); */
    /* int a = 3;
    int b = 4;
    printf("%d\n", zbir(a, b));
    ispisiZbir(3, 4); */
    // printf("%d\n", znak(4));
    // printf("%d\n", veci(5, 5));
    // printf("%d\n", apsolutno1(9));
    // printf("%d\n", paran(61));
    // printf("%d\n", zbirCifara(1234));
    // obrni(1234);
    // printf("%d\n", prost(35));
    // printf(prost(3) == 1 ? "True\n" : "False\n");
    // printf("%d\n", sumaProstih(10));
    faktorijel(3);
    return 0;
}
