#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool paran(int n) {
    if(n % 2 == 0)  return true;
    else return false;
}

int zbir(int a, int b) {
    int zbir = a+b;
    return zbir;
}


int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    // int z = zbir(a, b);
    printf("%d\n", zbir(a, b));

    /*for(int i = a; i <= b; i++) {
        if(paran(i) == true) {
            printf("%d\n", i);
        }
    }*/





    return 0;
}
