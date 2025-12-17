#include <stdio.h>
#include <stdlib.h>

void zad2(int a[], int n) {
    int parni[n], neparni[n];
    int p = 0, np = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            parni[p++] = a[i];
        } else {
            neparni[np++] = a[i];
        }
    }

    int k = 0;
    for (int i = 0; i < p; i++) {
        a[k++] = parni[i];
    }
    for (int i = 0; i < np; i++) {
        a[k++] = neparni[i];
    }
}
int main()
{

    return 0;
}
