#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for(int i = n; i >= 1; i--) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
