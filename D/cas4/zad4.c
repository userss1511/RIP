#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Za date stranice trougla a, b i c, odštampati površinu trougla.

    int a = 5;
    int b = 6;
    int c = 7;
    int s = (a + b + c) / 2;
    double povrsina = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%f", povrsina);
    return 0;
}
