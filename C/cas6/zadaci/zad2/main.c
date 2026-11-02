#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    /*int x;
    scanf("%d", &x);
    int apsolutnaVrijednost = abs(x); // |x|
    printf("%d\n", apsolutnaVrijednost); */

    for(int c = 10; c <= 99; c++) {
            bool ind = false;
        for(int a = 1; a < 100; a++) {
            for(int b = a+1; b < 100; b++) {
                if(ind == false && c*c == a*a + b*b) {
                    printf("%d\n", c);
                    ind = true;
                }
            }
        }
    }
    return 0;
}
