#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kompleksni brojevi
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // x = a + bi
    // y = c + di

    double real_zbir = a + c;
    double imag_zbir = b + d;

    double real_razlika = a - c;
    double imag_razlika = b - d;

    printf("%.2f %.2f\n", real_zbir, imag_zbir);
    printf("%.2f %.2f\n", real_razlika, imag_razlika);
    return 0;
}
