#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    bool ind;
    for(int c = 10; c <= 99; c++){
        ind = false;
        for(int a = 1; a < c;  a++) {
            for(int b = a+1; b < c; b++){
                if(c*c == a*a + b*b && ind == false){
                    printf("%d\n", c);
                    ind = true;
                }
            }
        }
    }
    return 0;
}
