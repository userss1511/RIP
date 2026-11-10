#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double kvadrat(double x) {
    /* double rez = x*x;
    return rez; */
    return x*x;
}

void procedura1(int n) {
// stampa n puta ime
for(int i = 1; i <= n; i++) {
    printf("Sara\n");
}
}

int zbir(int a, int b) {
    /* int rez = a + b;
    return rez; */
    return a + b;
}

void zbir1(int a, int b) {
    int z = a + b;
    printf("%d\n", z);
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
    if(x >= 0) return x;
    else return -1*x;
}

int paran(int x) {
    if(x % 2 == 0) return 1;
    else return 0;
}

int sumaCifara(int n) {
    int s = 0;
    while(n > 0) {
        int cif = n % 10;
        s = s + cif;
        n = n / 10;
    }
    return s;
}

bool prost(int n) {
 int brD = 0;
        for(int d = 1; d <= n; d++) {
            if(n % d  == 0) {
                brD++;
            }
        }
        if(brD == 2) return true;
        return false;
}

int sumaProstih(int n) {
    int suma = 0;

    for(int i = 1; i <= n; i++) {
        if(prost(i) == true) {
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
    // napisati program koji stampa proste brojeve iz intervala (a, b)
    // int a, b;
    // scanf("%d %d", &a, &b);
   /* for(int br = a + 1; br < b; br++) {
        int brD = 0;
        for(int d = 1; d <= br; d++) {
            if(br % d  == 0) {
                brD++;
            }
        }
        if(brD == 2) {
            printf("%d\n", br);
        }
    }
    */
    /* for(int br = a + 1; br < b; br++) {
        if(prost(br) == true) {
            printf("%d\n", br);
        }
    }*/

    // double n;
    // scanf("%lf", &n);
    // double rez = kvadrat(n);
    // printf("%.2f\n", kvadrat(n));
    /* int n;
    scanf("%d", &n);
    procedura1(n); */
    // printf("%d\n", zbir(15, 16));
    // zbir1(15, 16);
    // printf("%d\n", znak(0));
    // printf("%d\n", veci(8, 10));
    // printf("%d\n", apsolutno(-5));
    // printf("%d\n", paran(41));
    /* int n;
    scanf("%d", &n);
    printf("%d\n", sumaCifara(n));
    printf("%d\n", n); */
    // printf("%d\n", sumaProstih(10));
    faktorijel(3);
    return 0;
}
