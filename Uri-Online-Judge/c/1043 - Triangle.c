#include <stdio.h>


int main(){

   float A, B, C;

   scanf(" %f %f %f" , &A, &B, &C);

   if((A<B+C)&&(B<A+C)&&(C<B+A)) printf("Perimetro = %0.1f\n" , A+B+C);
   else printf("Area = %0.1f\n" , ((A+B)*C)/2);

return 0;

}