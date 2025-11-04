#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    while(n % 2 == 0){
        n = n / 2;
    }

    while(n % 3 == 0){
        n = n / 3;
    }

    while(n % 5 == 0){
        n = n / 5;
    }

    if(n == 1) {
        printf("Broj je Hemingov!\n");
    }
    else {
        printf("Broj nije Hemingov!\n");
    }

    printf(n == 1 ? "Jeste Hemingov!\n" : "Nije Hemingov!\n");
    return 0;
}
