#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n = 5;
    int niz[n];
    for(int i = 0; i < n; i++){
        niz[i] = rand() % 100;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", niz[i]);
    }
    return 0;
}
