#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int br1 = 1; br1 < 3000; br1++){
        for(int br2 = br1+1; br2 < 3000; br2++){
            int sumaD1 = 0;
            int sumaD2 = 0;

            for(int i = 1; i < br1; i++){
                if(br1 % i == 0){
                    sumaD1 = sumaD1 + i;
                }
            }

            for(int j = 1; j < br2; j++){
                if(br2 % j == 0){
                    sumaD2 = sumaD2 + j;
                }
            }

            if(br1 == sumaD2 && br2 == sumaD1){
                printf("%d %d\n", br1, br2);
            }
        }
    }
    return 0;
}
