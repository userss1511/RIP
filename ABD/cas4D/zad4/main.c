#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //double s = (double) (a + b + c) / 2;   ///double / int --> double
    double s = (a + b + c) / 2.0;   /// int / double --> double
    double p = sqrt(s*(s-a)*(s-b)*(s-c));  // sqrt() je funkcija za korijen

    printf("%f", p);
    return 0;
}
