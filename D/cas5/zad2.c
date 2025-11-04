#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int brBodova;
   scanf("%d", &brBodova);

   /*if(brBodova > 50){
    printf("Polozio!\n");
   }
   else {
    printf("Pao!\n");
   }*/
   printf(brBodova % 2 == 0 ? "Paran" : "Neparan");
   printf(brBodova > 50 ? "Polozio!\n" : "Pao!\n"); //ternarni operator
   bool ind1 = true; //1
   bool ind2 = false;//0
   printf("%d", ind1);
    return 0;
}
