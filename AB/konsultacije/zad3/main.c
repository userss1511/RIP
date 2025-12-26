#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>


///Napisati program koji u datoj matrici različitih cijelih brojeva pronalazi i štampa sve brojeve za koje važi da su najmanji u svom redu a najveći u svojoj koloni.
bool najmanjiURedu(int m, int n, int mat[m][n], int vrsta, int kolona){
for(int j = 0; j < n; j++){
if(j != kolona && mat[vrsta][kolona] >= mat[vrsta][j]) return false;
}
return true;
}

bool najveciUKoloni(int m, int n, int mat[m][n], int vrsta, int kolona){
for(int i = 0; i < m; i++){
if(i != vrsta && mat[vrsta][kolona] <= mat[i][kolona]) return false;
}
return true;
}

void unosMatrice(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        scanf("%d", &mat[i][j]);
    }
}
}

void stampaMatrice(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
}

void zad2(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(najmanjiURedu(m, n, mat, i, j) == true && najveciUKoloni(m, n, mat, i, j) == true) ///ideja da se stampa broj ukoliko vazi da je najmanji u redu i najveci u koloni
            printf("%d\n", mat[i][j]);
    }
}
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    unosMatrice(m, n, mat);
    stampaMatrice(m, n, mat);
    zad2(m, n, mat);
    //printf("%d\n", najmanjiURedu(m, n, mat, 1, 2));
    return 0;
}
