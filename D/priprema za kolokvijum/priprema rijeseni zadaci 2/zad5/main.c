#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    ///Napisati kod koji sa standardnog ulaza učitava n trojki pozitivnih cijelih brojeva (a, b, c) i vraća površinu najvećeg trougla sa stranicama a, b i c.

 int n, a, b, c;
    double maxP = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);


        if (a + b > c && a + c > b && b + c > a) {

            double s = (a + b + c) / 2;
            double P = sqrt(s * (s - a) * (s - b) * (s - c));
            if (P > maxP) {
                maxP = P;
            }
        }
    }

    printf("Najveca povrsina je: %f\n", maxP);

    return 0;
}
