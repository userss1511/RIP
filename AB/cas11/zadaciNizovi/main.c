#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void ucitajNiz(int niz[], int n){
for(int i = 0; i < n; i++){
    scanf("%d", &niz[i]);
}
}

void stampaNiza(int niz[], int n){
for(int i = 0; i < n; i++){
    printf("%d ", niz[i]);
}
printf("\n");
}

void updateArray(int a, int b[], int n){
for(int i = 0; i < n; i++){
    if(b[i] >= 0) b[i] = b[i] - a;
    else b[i] = b[i] + a;
}
}

int brojParnihEl(int niz[], int n){
int br = 0;
for(int i = 0; i < n; i++){
    if(niz[i] % 2 == 0){
        br += 1;
    }
}
return br;
}

void razdvoj(int a[], int n){
int parni[brojParnihEl(a, n)];
int neparni[n - brojParnihEl(a, n)];
int brP = 0, brN = 0;

for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0) {
        parni[brP] = a[i];
        brP += 1;
    }
    else {
        neparni[brN] = a[i];
        brN += 1;
    }
}

stampaNiza(parni, brojParnihEl(a, n));
stampaNiza(neparni, n - brojParnihEl(a, n));

}

int count(int niz[], int n, int k){
int br = 0;
for(int i = 0; i < n; i++){
    if(niz[i] == k) br++;
}

return br;
}

int najcesci(int niz[], int n){
int maxP = 0;
int maxEl = 0;
for(int i = 0; i < n; i++){
    int brP = count(niz, n, niz[i]);
    if(brP > maxP){
        maxP = brP;
        maxEl = niz[i];
    }
}

return maxEl;
}

void fillThirteenSeventeen(int a, int b[], int n){
int i = 0;
for(int br = 1; br <= 1000; br++){
    if(br >= a && br % 13 == 0 && br % 17 == 0) {
        b[i] = br;
        i++;
        if(i == n) break;
    }
}

stampaNiza(b, n);
}

int changeSign(int niz[], int n) {
int br = 0;
for(int i = 0; i < n-1; i++){
    int p = niz[i] * niz[i+1];
    if(p < 0) br++;
}
return br;
}

void shiftLeft(int niz[], int n){
int temp = niz[0];
for(int i = 0; i < n-1; i++){
    niz[i] = niz[i+1];
}
niz[n-1] = temp;
}

int brParnihCifBroj(int n){
int br = 0;
while(n > 0){
    int cif = n % 10;
    if(cif % 2 == 0) br = br + 1;
    n = n / 10;
}
return br;
}

int parneCifre(int niz[],int n, int k){
int br = 0;
for(int i = 0; i < n; i++){
    int brojParnih = brParnihCifBroj(niz[i]);
    if(brojParnih >= k) br = br + 1;
}
return br;
}

void ocjeneZad(double ocjene[], int n){
double ocjena = 0;
for(int i = 0; i < n; i++){
    ocjena = ocjena + ocjene[i];
}

if(ocjena < 50) printf("F\n");
else if(ocjena < 60) printf("E\n");
else if(ocjena < 70) printf("D\n");
else if(ocjena < 80) printf("C\n");
else if(ocjena < 90) printf("B\n");
else printf("A\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int niz[n];
    ucitajNiz(niz, n);
    //updateArray(3, niz, n);
    //stampaNiza(niz, n);
    //razdvoj(niz, n);
    //printf("%d\n", count(niz, n, 3));
    //printf("%d\n", najcesci(niz, n));
    //fillThirteenSeventeen(1, niz, n);
    //printf("%d\n", changeSign(niz, n));
    //shiftLeft(niz, n);
    //stampaNiza(niz, n);
    //printf("%d\n", parneCifre(niz, n, 2));
    double ocjene[4] = {30.0, 30.0, 30.0, 10.0};
    ocjeneZad(ocjene, 4);
    return 0;
}
