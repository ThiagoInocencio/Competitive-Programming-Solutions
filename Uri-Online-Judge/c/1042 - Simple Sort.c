#include <stdio.h>


int main(){

   int A, B, C, D, F, G;

   scanf(" %d %d %d" , &A, &B, &C);
   D = A;
   F = B;
   G = C;

   if(A>B) {
      A = A + B;
      B = A - B;
      A = A - B;
   }

   if(A>C) {
      A = A + C;
      C = A - C;
      A = A - C;
   }

   if(B>C) {
      B = B + C;
      C = B - C;
      B = B - C;
   }



   printf("%d\n%d\n%d\n\n%d\n%d\n%d\n" , A, B , C, D, F, G);



return 0;

}