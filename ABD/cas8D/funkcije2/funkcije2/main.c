#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
double stepen(double a, int n) {
double rez = 1;

if(n >= 0) {
    for(int i = 1; i <= n; i++) {
        rez = rez * a;
    }

    return rez;
}
else {
        for(int i = 1; i <= -n; i++) {
            rez = rez * a;
        }
        return 1 / rez;
}

}

int zbirKvadrata(int n) {
int suma = 0;
    for(int i = 1; i <= n; i++) {
        suma = suma + i*i;
    }
return suma;
}

bool savrsen(int n) {
int sumaD = 0;

    for(int d = 1; d < n; d++) {
        if(n % d == 0)
            sumaD = sumaD + d;
    }

    if(sumaD == n) return true;
    else return false;
}

void cifre(int n) {
int parneCif = 0;
int neparneCif = 0;

while(n > 0) {
    int cif = n % 10;
    if(cif % 2 == 0) parneCif++;
    else neparneCif++;
    n = n / 10;
}

if(parneCif == neparneCif) printf("Broj ima jednak broj parnih i neparnih cifara!\n");
else printf("Broj nema jednak broj parnih i neparnih cifara!\n");

}

bool zetoni(int n, int k) {
    int brZetona = 4*(n-1);
    if(brZetona == k) return true;
    else return false;
}

int main()
{
    // printf("%f\n", stepen(2, -10));
    // printf("%d\n", zbirKvadrata(3));
    // printf(savrsen(6) == true ? "True\n" : "False\n");
    // cifre(1234);
    int n, k;
    scanf("%d %d", &n, &k);
    printf(zetoni(n, k) == true ? "True\n" : "False\n");
    return 0;
}
