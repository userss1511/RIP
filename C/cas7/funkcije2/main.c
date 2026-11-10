#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double stepen(int a, int n) {
double rez = 1;
int br = (n >= 0) ? n : -n;

for(int i = 1; i <= br; i++) {
            rez *= a; // rez = rez * a;
        }

    if(n >= 0) return rez;
    else return 1 / rez;

}

int zbirKvadrata(int n) {
int suma = 0;
    for(int i = 1; i <= n; i++) {
        suma = suma + stepen(i, 2);
    }

    return suma;
}

int sumaDjelilaca(int n) { // bez tog broja
int suma = 0;
    for(int d = 1; d < n; d++) {
        if(n % d == 0) {
            suma = suma + d;
        }
    }
    return suma;
}

bool savrsen(int n) {
int sumaD = sumaDjelilaca(n);
if(n == sumaD) return true;
else return false;
}

bool cifre(int n) {
    int parne = 0;
    int neparne = 0;

    while(n > 0) {
        int cif = n % 10;
        if(cif % 2 == 0) parne = parne + 1;
        else neparne = neparne + 1;
        n = n / 10;
    }

    if(parne == neparne) return true;
    else return false;
}

void zetoni(int n, int k) {
int brojZetona = 4*(n-1);
    if(brojZetona == k) printf("Da!\n");
    else printf("Ne!\n");
}

int main()
{
    // printf("%.2f\n", stepen(2, -1));
    // printf("%d\n", zbirKvadrata(3));
    // printf("%d\n", sumaDjelilaca(4));
    // printf("%d\n", savrsen(6));
    // printf(cifre(1234) == 1 ? "True" : "False");
    zetoni(6, 20);
    return 0;
}
