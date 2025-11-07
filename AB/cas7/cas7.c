#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/*int/double/char/float/bool - funkcije koje imaju povratnu vrijednost
void - procedure*/

/*int imeFunkcije(int x){
return 1;
}*/

/*void imeFunkcije1(int x, int y){

}*/

double kvadrat(double x){
double rez = x * x;
return rez;
//return x*x;
}

int zbir(int a, int b){
int rez = a + b;
return rez;
//return a + b;
}

void ispisiZbir(int a, int b){
int rez = a + b;
printf("%d\n", rez);
}

int znak(int n){
if(n > 0) return 1;
else if(n < 0) return -1;
else return 0;
}

int veci(int a, int b){
if(a > b) return a;
else return b;
}

int apsolutno(int x){
if(x >= 0) return x;
else return -1*x;
}

int paran(int n){
if(n % 2 == 0) return 1;
else return 0;
}

bool paran1(int n){
if(n % 2 == 0) return true;
else return false;
}

int sumaCifara(int n){
int s = 0;
while(n > 0){
    int cif = n % 10;
    s = s + cif;
    n = n / 10;
}
return s;
}

int brCifara(int n){
int br = 0;
while(n > 0){
    br = br + 1;
    n = n / 10;
}
return br;
}

void obrni(int n){
int tezina = brCifara(n) - 1;
int noviBroj = 0;
while(n > 0){
    int cif = n % 10;
    noviBroj = noviBroj + cif*pow(10, tezina);
    tezina = tezina - 1;
    n = n / 10;
}
printf("%d\n", noviBroj);

}

bool prost(int n){
int brD = 0;
for(int i = 1; i <= n; i++){
    if(n % i == 0) {
        brD = brD + 1;
    }
}
if(brD <= 2) return true;
else return false;
}

bool prost1(int n){
for(int i = 2; i <= sqrt(n); i++){ //optimizovano
    if(n % i == 0) return false;
}
return true;
}

int sumaProstih(int n){
int s = 0;
for(int i = 1; i <= n; i++){
    if(prost(i) == true){ //if(prost(i))
        s = s + i;
    }
}
return s;
}

void faktorijel(int n){
int rez = 1;
for(int i = 1; i <= n; i++){
    rez = rez * i;
}
printf("%d\n", rez);
}

int main()
{
    ///Stampati sve proste brojeve od 1 do 10

    /*for(int i = 1; i <= 10; i++){
        int brD = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                brD = brD + 1;
        }

        if(brD <= 2){
            printf("%d\n", i);
        }
    }*/

    /*for(int i = 1; i <= 10; i++){
        if(prost(i) == true){
            printf("%d\n", i);
        }
    }*/
    //double k = kvadrat(5);
    //printf("%f\n", k);
    //printf("%f\n", kvadrat(5));
    //printf("%d\n", zbir(3, 4));
    //ispisiZbir(5, 6);
    //printf("%d\n", znak(0));
    //printf("%d\n", veci(1, 8));
    //printf("%d\n", apsolutno(9));
    //printf("%d\n", paran(9));
    //printf("%d\n", sumaCifara(1092));
    //printf("%d\n", brCifara(6504));
    //obrni(123456);
    //printf("%d\n", prost(35));
    //printf("%d\n", prost1(3));
    //printf("%d\n", sumaProstih(3));
    faktorijel(5);
    return 0;
}
