#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ucitajMatricu(int m, int n, int mat[m][n]){
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

void zad3(int m, int n, int mat[m][n]){
double niz[n];
for(int j = 0; j < n; j++){
    double s = 0;
    for(int i = 0; i < m; i++){
        s += mat[i][j];
    }
    niz[j] = s / m;
}

for(int i = 0; i < n; i++){
    printf("%f ", niz[i]);
}
printf("\n");
}

void zad4(int m, int n, int a[m][n], int b[m][n]){
int c[m][n];
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        int max = a[i][j] > b[i][j] ? a[i][j] : b[i][j];
        c[i][j] = max;
    }
}

stampaMatrice(m, n, c);
}

bool zad5(int m, int n, int mat[m][n]){
int sumaVrste = 0;
int sumaKolone = 0;
for(int j = 0; j < n; j++) sumaVrste += mat[0][j];
for(int i = 0; i < m; i++) sumaKolone += mat[i][0];

for(int i = 1; i < m; i++){
        int trenSuma = 0;
    for(int j = 0; j < n; j++){
        trenSuma += mat[i][j];
    }
    if(trenSuma != sumaVrste) return false;
}


for(int j = 1; j < n; j++){
        int trenSuma = 0;
    for(int i = 0; i < m; i++){
        trenSuma += mat[i][j];
    }
    if(trenSuma != sumaKolone) return false;
}

return true;
}

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    ucitajMatricu(m, n, mat);
    //int b[m][n];
    //ucitajMatricu(m, n, b);
    //zad4(m, n, mat, b);
    //stampaMatrice(m, n, mat);
    //zad3(m, n, mat);
    //printf("%d\n", zad5(m, n, mat));
    /*int mat[2][2] = {{1, 2}, {3, 4}};
    printf("%d\n", mat[0][0]);*/
    return 0;
}
