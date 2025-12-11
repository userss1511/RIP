#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

void unesiMatricu(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        scanf("%d", &mat[i][j]);
    }
}
}

void stampajMatricu(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
}

int zad1(int m, int n, int mat[m][n]){
int s = 0;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(i % 2 == 0 && j % 2 == 1){
            s = s + mat[i][j];
        }
    }
}
return s;
}

void zad2(int m, int n, int mat[m][n], int r, int s){
int temp[m];
for(int i = 0; i < m; i++){
    temp[i] = mat[i][r];
}

for(int i = 0; i < m; i++){
    mat[i][r] = mat[i][s];
}

for(int i = 0; i < m; i++){
    mat[i][s] = temp[i];
}

}

bool uslovZad3(int niz[], int n){
for(int br = 1; br <= n; br++){
        bool ind = false;
    for(int i = 0; i < n; i++){
        if(niz[i] == br) ind = true;
    }
    if(ind == false) return false;
}
return true;
}

void zad3(int m, int n, int mat[m][n]){
bool ind = true;
if(m != n) ind = false;
for(int i = 0; i < m; i++){
    bool ind1 = uslovZad3(mat[i], n);
    if(ind1 == false) ind = false;
}

if(ind) printf("DA!\n");
else printf("NE!\n");
}

void zad4(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        bool ind = true;
        if(i-1 >= 0 && j-1 >= 0 && mat[i][j] < mat[i-1][j-1]) ind = false;
        if(i-1 >= 0 && mat[i][j] < mat[i-1][j]) ind = false;
        if(i-1 >= 0 && j+1 < n && mat[i][j] < mat[i-1][j+1]) ind = false;
        if(j-1 >= 0 && mat[i][j] < mat[i][j-1]) ind = false;
        if(j+1 < n && mat[i][j] < mat[i][j+1]) ind = false;
        if(i+1 < m && j-1 >= 0 && mat[i][j] < mat[i+1][j-1]) ind = false;
        if(i+1 < m && mat[i][j] < mat[i+1][j]) ind = false;
        if(i+1 < m && j+1 < n && mat[i][j] < mat[i+1][j+1]) ind = false;

        if(ind) printf("%d\n", mat[i][j]);
    }
}
}

void zad5(int m, int n, int mat[m][n]){
int i1, j1, i2, j2;
int br = 0;

for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(mat[i][j] == 1){
            if(br == 0){
                i1 = i;
                j1 = j;
                br++;
            }
           else if(br == 1){
                i2 = i;
                j2 = j;
                br++;
           }
        }
    }
}

if(i1 == i2 || j1 == j2 || abs(i1 - i2) == abs(j1 - j2)) printf("Napadaju se!\n");
else printf("Ne napadaju se!\n");
}

int zad6(int m, int n, int mat[m][n]){
int max = INT_MIN;
int ind = -1;
if(m != n) return -1;

for(int i = 0; i < m; i++){
   if(mat[i][i] > max){
    max = mat[i][i];
    ind = i;
   }
}
return ind;

}

double zad7(int m, int n, int mat[m][n]){
double s = 0;
if(m != n) return -1;
for(int i = 0; i < m; i++){
    s = s + mat[i][n-1-i];
}
return s/m;
}

bool zad8(int m, int n, int mat[m][n]){
if(m != n) return false;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(mat[i][j] != mat[j][i]) return false;
    }
}
return true;
}

void zad9(int m, int n, int mat[m][n]){
int b[m][n];
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        b[i][j] = mat[i][n-j-1];
    }
}
stampajMatricu(m, n, b);
}

void zad10(int m, int n, int mat[m][n]){
int rez[n][m];
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        rez[j][m-i-1] = mat[i][j];
    }
}
stampajMatricu(n, m, rez);
}
int main()
{
    /*int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    unesiMatricu(m, n, mat);*/
    //stampajMatricu(m, n, mat);
    //printf("%d\n", zad1(m, n, mat));
    //zad2(m, n, mat, 1, 3);
    //stampajMatricu(m, n, mat);
    //zad3(m, n, mat);
    //zad4(m, n, mat);
    //zad5(m, n, mat);
    //printf("%d\n", zad6(m, n, mat));
    //printf("%f", zad7(m, n, mat));
    //printf("%d\n", zad8(m, n, mat));
    //zad9(m, n, mat);
    //zad10(m, n, mat);
    int n;
    scanf("%d\n", &n);
    char recenica[n];
    for(int i = 0; i < n; i++){
        scanf("%c", &recenica[i]);
    }
    recenica[n] = '\0';
    for(int i = 0; i < n; i++){
        printf("%c", recenica[i]);
    }
    return 0;
}
