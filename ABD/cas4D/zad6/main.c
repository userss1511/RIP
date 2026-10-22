#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a > b) {
        printf("%f\n", b);
    }
    else { // if(a <= b)
        printf("%f\n", a);
    }

    return 0;
}
