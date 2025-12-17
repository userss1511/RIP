#include <stdio.h>
#include <stdlib.h>


void zad5(int m, int n, int mat[m][n], int rez[]) {
    int k = 0;

    for (int j = 0; j < n; j++) {
        int e = mat[0][j];

        for (int i = 1; i < m; i++) {
            if (j % 2 == 0) {        // parna kolona - maksimum
                if (mat[i][j] > e)
                    e = mat[i][j];
            } else {                 // neparna kolona - minimum
                if (mat[i][j] < e)
                    e = mat[i][j];
            }
        }

        rez[k++] = e;
    }
}
int main()
{

    return 0;
}
