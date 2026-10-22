#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    if(a < b){
        printf("%f\n", a);
    }
   else { // a >= b
        printf("%f\n", b);
   }
    return 0;
}
