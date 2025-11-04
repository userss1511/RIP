#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5.	Napisati program u programskom jeziku
    //C koji učitava dva cijela broja (a i b) i ispisuje rezultate njihovog poređenja.
   int a = 3;
   int b = 4;

   if(a > b){
    printf("Promjenljiva a je veca od promjenljive b\n");
   }
   if(a < b){
    printf("Promjenljiva a je manja od promjenljive b\n");
   }
   if(a == b){
    printf("Promjenljiva a jednaka promjenljivoj b\n");
   }
    return 0;
}
