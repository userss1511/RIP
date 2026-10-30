#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int br1 = 1; br1 < 3000; br1++) {
            int sumaD1 = 0;
            for(int d1 = 1; d1 < br1; d1++) {
                if(br1 % d1 == 0) {
                    sumaD1 = sumaD1 + d1;
                }
            }
        for(int br2 = br1+1; br2 < 3000; br2++) {
            int sumaD2 = 0;
            for(int d2 = 1; d2 < br2; d2++) {
                if(br2 % d2 == 0) {
                    sumaD2 = sumaD2 + d2;
                }
            }

            if(br1 == sumaD2 && br2 == sumaD1) {
                printf("(%d, %d)\n", br1, br2);
            }
        }
    }
    return 0;
}
