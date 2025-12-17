#include <stdio.h>
#include <stdlib.h>


void saberiPolinome(int a[], int b[], int c[], int n) {
    int i;
    for (i = 0; i <= n; i++) {
        c[i] = a[i] + b[i];
    }
}
int main() {
    int n;
    scanf("%d", &n);

    int a[n + 1], b[n + 1], c[n + 1];

    for (int i = 0; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= n; i++) {
        scanf("%d", &b[i]);
    }

    saberiPolinome(a, b, c, n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
