#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int brD = 0;

    if(n == 1){
        printf("Prost broj\n");
    }
    else {
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                brD = brD + 1;
            }
        }
        if(brD == 2){
            printf("Broj je prost\n");
        }
        else {
            printf("Broj je slozen\n");
        }
    }

    return 0;
}
