#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
///int, double, char, float, bool - funkcije koje vracu neki rezultat
///void - procedure

/*int imeFunkcije(int a){
    return
}*/

/*void imeProcedure(int a){

}*/

double kvadrat(double x){
double rez = x*x; //pow(x, 2)
return rez;
//return x*x;
}

int zbir(int a, int b){
int rez = a + b;
return rez;
//return a+b;
}

void ispisiZbir(int a, int b){
int rez = a + b;
printf("%d\n", rez);
}

int znak(int x){
if(x > 0) return 1;
else if(x < 0) return -1;
else return 0;
}

int apsolutno(int x){
//abs(x)
//fabs(x)
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

int brCif(int n){
int br = 0;
while(n > 0){
    br = br + 1;
    n = n / 10;
}
return br;
}

void obrni(int n){
int tezina = brCif(n) - 1;
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
    if(n % i == 0){
        brD = brD + 1;
    }
}
if(brD <= 2) return true;
else return false;
}

bool prost1(int n){ //optimizovano
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return false;
    }
}
return true;
}

int sumaProstih(int n){
int s = 0;
for(int i = 1; i <= n; i++){
    if(prost(i) == true){
        s = s + i;
    }
}
return s;
}

void faktorijel(int n){
int rez = 1;
for(int i = 1; i <= n; i++){
    rez = rez*i;
}
printf("%d\n", rez);
}

int main()
{
    //Stampati sve brojeve od 1 do 10 koji su prosti
    /*for(int i = 1; i <= 10; i++){
        int brD = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0) {
                brD = brD + 1;
            }
        }
        if(brD <= 2) {
            printf("%d\n", i);
        }

    }*/

    /*for(int i = 1; i <= 10; i++){
        if(prost(i) == true && savrsen(i) == true){
            pritnf("%d\n", i);
        }
    }*/

    //double k = kvadrat(5.0);
    //printf("%f\n", k);
    //printf("%f\n", kvadrat(5.0));
    //printf("%d\n", zbir(5, 2));
    //ispisiZbir(3, 4);
    //printf("%d\n", znak(0));
    //printf("%d\n", apsolutno(-1));
    //printf("%d\n", paran1(8));
    //printf("%d\n", sumaCifara(123));
    //obrni(123456);
    //printf("%d\n", prost(2));
    //printf("%d\n", sumaProstih(10));
    faktorijel(3);
    return 0;
}
