#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Za date stranice trougla a, b i c, odštampati površinu trougla.
    int a = 4;
    int b = 5;
    int c = 6;
    double s = (a+b+c)/2;
    double povrsina = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f", povrsina);



    return 0;
}
