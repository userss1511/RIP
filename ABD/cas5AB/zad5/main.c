#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    bool ind1 = true; // 1
    bool ind2 = false; // 0
    printf("%d\n", ind1);
    printf("%d\n", ind2);
    int n;
    scanf("%d", &n);

    while(n % 2 == 0) {
        n = n / 2;
    }

    while(n % 3 == 0) {
        n = n / 3;
    }

    while(n % 5 == 0) {
        n = n / 5;
    }

    if(n == 1) {
        printf("Broj jeste Hemingov!\n");
    }
    else {
        printf("Broj nije Hemingov!\n");
    }
    return 0;
}
