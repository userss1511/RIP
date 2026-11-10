#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double stepen(double a, int n) {
    double p = 1;

    if(n >= 0) {
        // n pozitivno
        for(int i = 1; i <= n; i++) {
            p = p *a;
        }

        return p;
    }
    else {
        // n negativno
        int br = -n;
        for(int i = 1; i <= br; i++) {
            p = p * a;
        }

        return 1 / p;
    }
}

int zbirKvadrata(int n) {
int suma = 0;
    for(int i = 1; i <= n; i++) {
        suma = suma + i*i;
    }

    return suma;
}

int sumaDjelilaca(int n) {
int s = 0;
    for(int d = 1; d < n; d++) {
        if(n % d == 0) {
            s += d; // s = s + d;
        }
    }
return s;
}

bool savrsen(int n) {
int sumaD = sumaDjelilaca(n);
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
return brZetona == k ? true : false;
}


int main()
{
    printf("%.2f\n", stepen(2, -1));
    printf("%d\n", zbirKvadrata(3));
    printf("%d\n", savrsen(6));
    cifre(1234);
    printf("%d\n", zetoni(6, 2));
    return 0;
}
