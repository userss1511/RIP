#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void zad5(int m, int n, int mat[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            bool ind = true;

            if (mat[i][j] != 1)
                ind = false;

            if (i - 1 >= 0 && j - 1 >= 0 && mat[i - 1][j - 1] == 1) ind = false;
            if (i - 1 >= 0 && mat[i - 1][j] == 1) ind = false;
            if (i - 1 >= 0 && j + 1 < n && mat[i - 1][j + 1] == 1) ind = false;
            if (j - 1 >= 0 && mat[i][j - 1] == 1) ind = false;
            if (j + 1 < n && mat[i][j + 1] == 1) ind = false;
            if (i + 1 < m && j - 1 >= 0 && mat[i + 1][j - 1] == 1) ind = false;
            if (i + 1 < m && mat[i + 1][j] == 1) ind = false;
            if (i + 1 < m && j + 1 < n && mat[i + 1][j + 1] == 1) ind = false;

            if (ind)
                printf("(%d, %d)\n", i, j);
        }
    }
}
int main()
{

    return 0;
}
