#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    for(int c = 10; c <= 99; c++) { // kandidat
            bool ind = false;
        for(int a = 1; a < 100; a++) {
                for(int b = a+1; b < 100; b++) {
                    if(ind == false && c*c == a*a + b*b) {
                        ind = true;
                        printf("%d\n", c);
                    }
                }
        }
    }

    return 0;
}
