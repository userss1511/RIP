#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a > b) {
        printf("%f", b);
    }
    else { // if(a <= b)
        printf("%f", a);
    }

    return 0;
}
