#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

double stepen(int a, int n){
if(n >= 0){
    int br = n;
    double rez = 1;
    while(br != 0){
        rez = rez * a;
        br -= 1;
    }
    return rez;
}
else{
        int br = -1*n;
    double rez = 1;
    while(br != 0){
        rez = rez * a;
        br -= 1;
    }
    return 1/rez;
}
}

int zbirKvadrata(int n){
int s = 0;
for(int i = 1; i <= n; i++){
    s += stepen(i, 2);
}
return s;
}

int nzs(int a, int b){
    while(a % b != 0){
        int c = a % b;
        a = b;
        b = c;
    }
    return b;
}

int nzd(int a, int b){
return a*b/nzs(a, b);
}

bool savrsen(int n){
int s = 0;
for(int i = 1; i < n; i++){
    if(n % i == 0) s += i;
}
if(s == n) return true;
return false;
}

void stampaPiramide(int n){
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        printf("%d", j);
    }
    printf("\n");
}

for(int i = n-1; i >= 1; i--){
    for(int j = 1; j <= i; j++){
        printf("%d", j);
    }
    printf("\n");
}
}

void parniNeparni(int n){
int brParnih = 0, brNeparnih = 0;
while(n > 0){
    int cif = n % 10;
    if(cif % 2 == 0) brParnih += 1;
    else brNeparnih += 1;
    n = n / 10;
}

if(brParnih > brNeparnih) printf("Ima vise parnih cifara!\n");
else if(brParnih < brNeparnih) printf("Ima vise neparnih cifara!\n");
else printf("Ima jednak broj parnih i neparnih cifara!\n");
}

bool zetoni(int k, int n){
int brZetona = n + (n - 1)* 2 + (n - 2);
if(brZetona == k) return true;
return false;
}

int main()
{
    //printf("%f\n", stepen(2, 4));
    //printf("%d\n", zbirKvadrata(4));
    //printf("%d\n", nzd(8, 4));
    //printf("%d\n", savrsen(6));
    //stampaPiramide(4);
    //parniNeparni(1010);
    //printf("%d\n", zetoni(21, 6));
    return 0;
}
