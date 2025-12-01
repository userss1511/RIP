#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double stepen(double a, int n){
double p = 1;
if(n >= 0){
    while(n != 0){
        p = p * a;
        n = n - 1;
    }
    return p;
}
else {
    //n = n*(-1);
    while(n != 0){
        p = p * a;
        n = n + 1;
    }

    return 1/p;
}
}

int zbirKvadrata(int n){
int z = 0;
for(int i = 1; i <= n; i++){
    z = z + i*i;
}
return z;
}

bool savrsen(int n){
int sumaD = 0;
for(int i = 1; i < n; i++){
    if(n % i == 0){
        sumaD = sumaD + i;
    }
}

if(n == sumaD) return true;
else return false;
}

//brojParnihCifara nekog broja
int brParnihCif(int n){
int br = 0;
while(n > 0){
    int cif = n % 10;
    if(cif % 2 == 0){
        br++;
    }
    n = n / 10;
}
return br;
}

//brojNeparnihCifara nekog broja
int brNeparnihCif(int n){
int br = 0;
while(n > 0){
    int cif = n % 10;
    if(cif % 2 == 1){
        br++;
    }
    n = n / 10;
}
return br;
}

bool parniNeparni(int n){
int parni = brParnihCif(n);
int neparni = brNeparnihCif(n);
if(parni == neparni) return true;
return false;
}

void zetoni(int n, int k){
int brZ = 4*n - 4;
if(brZ == k){
    printf("Da!\n");
}
else {
    printf("Ne!\n");
}
}

int main()
{
    //printf("%f\n", stepen(2, -1));
    //printf("%d\n", zbirKvadrata(4));
    //printf("%d\n", savrsen(4));
    //printf("%d\n", brNeparnihCif(123));
    //printf("%d\n", parniNeparni(12345));
    //zetoni(6, 20);
    return 0;
}
