#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

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

int zad3(int niz[], int n){
int brojParnih = 0;
for(int i = 0; i < n; i++){
    if(niz[i] % 2 == 0){
        brojParnih = brojParnih + 1;
    }
}
return brojParnih;
}

void zad4(int niz[], int n){
for(int i = 0; i < n; i++){
    niz[i] = niz[i]*niz[i]; //pow(niz[i],2)
}
}

int zad5(int niz[], int n){
int min =INT_MAX;

for(int i = 0; i < n; i++){
    if(niz[i] < min){
        min = niz[i];
    }
}
return min;
}

int zad6(int niz[], int n){
int max = INT_MIN;
for(int i = 0; i < n; i++){
    if(max < niz[i]){
        max = niz[i];
    }
}
return max;
}

int zad7(int niz[], int n){
int min = INT_MAX;
bool ind = false;
for(int i = 0; i < n; i++){
    if(niz[i] < min && niz[i] % 2 != 0){
        min = niz[i];
        ind = true;
    }
}
if(ind == false) printf("Nema neparnih brojeva!\n");
return min;
}

double zad8(int niz[], int n){
double s = 0;
for(int i = 0; i < n; i++){
    s = s + niz[i];
}
return s / n;
}

void bubbleSort(int niz[], int n){
for(int i = 1; i <= n; i++){ //za iteracije
    for(int j = 0; j < n-1; j++){ //za indekse niza
        if(niz[j] > niz[j+1]){ //izvrsiti zamjenu elemenata
            //niz[j-1] -> j = 1 ... j < n
            //niz[j-2] -> j = 2 ... j < n
            int temp = niz[j];
            niz[j] = niz[j+1];
            niz[j+1] = temp;
        }
    }
}
}

int main()
{
    int n; // duzina niza
    scanf("%d", &n);
    int niz[n];
    ucitajNiz(niz, n);
    stampaNiza(niz, n);
    /*int x = 5;
    scanf("%d", &x);*/
    //int niz1[3] = {1, 2, 3};
    //printf("%d\n", niz1[1]);
    //printf("%d\n", zad3(niz, n));
    //zad4(niz, n);
    //stampaNiza(niz, n);
    //printf("%d\n", zad5(niz, n));
    //printf("%d\n", zad6(niz, n));
    //printf("%d\n", zad7(niz, n));
    //printf("%f\n", zad8(niz, n));
    bubbleSort(niz, n);
    stampaNiza(niz, n);
    return 0;
}
