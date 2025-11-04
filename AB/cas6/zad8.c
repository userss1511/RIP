#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1, y1, a1, x2, y2, a2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &a1, &x2, &y2, &a2);
    /*int a = 4;
    int apsA = abs(a);
    printf("%d\n", apsA);*/

   if(fabs(x1 - x2) < (a1 + a2)/2 && fabs(y1 - y2) < (a1 + a2)/2){
    printf("Kvadrati se sijeku!\n");
   }
   else {
    printf("Kvadrati se ne sijeku!\n");
   }
    return 0;
}
