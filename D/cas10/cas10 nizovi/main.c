#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void unosNiza(int niz[], int n){
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

int brParnih(int niz[], int n){
int br = 0;
for(int i = 0; i < n; i++){
    if(niz[i] % 2 == 0) br++;
}
return br;
}

void kvadriraj(int niz[], int n){
for(int i = 0; i < n; i++){
    niz[i] = niz[i]*niz[i];
}
}

int minEl(int niz[], int n){
int min = INT_MAX;
for(int i = 0; i < n; i++){
    if(min > niz[i]){
        min = niz[i];
    }
}
return min;
}

int maxEl(int niz[], int n){
int max = INT_MIN;
for(int i = 0; i < n; i++){
    if(max < niz[i]){
        max = niz[i];
    }
}
return max;
}

int minElNeparni(int niz[], int n){
int min = INT_MAX;
for(int i = 0; i < n; i++){
    if(min > niz[i] && niz[i] % 2 != 0){
        min = niz[i];
    }
}
return min;
}

double aritmetickaSredina(int niz[], int n){
double suma = 0;
for(int i = 0; i < n; i++){
    suma += niz[i];
}

return suma/n;
}

void bubbleSort(int niz[], int n){
for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
        if(niz[j] > niz[j+1]){
            int temp = niz[j];
            niz[j] = niz[j+1];
            niz[j+1] = temp;
        }
    }
}
}

int main()
{
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    //stampaNiza(niz, n);
    //printf("%d\n", brParnih(niz, n));
    //kvadriraj(niz, n);
    //stampaNiza(niz, n);
    //printf("%d\n", minEl(niz, n));
    //printf("%d\n", maxEl(niz, n));
    //printf("%d\n", minElNeparni(niz, n));
    //bubbleSort(niz, n);
    //stampaNiza(niz, n);
    printf("%f\n", aritmetickaSredina(niz, n));
    return 0;
}
