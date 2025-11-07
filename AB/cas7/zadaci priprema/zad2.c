#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1){
        printf("Napadaju se!\n");
    }
    else {
        printf("Ne napadaju se!\n");
    }
    ///4 4 4 5 -> DA
    ///1 1 3 3 -> NE
    return 0;
}
