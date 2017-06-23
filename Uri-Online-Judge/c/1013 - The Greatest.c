#include <stdio.h>

int main(){

   int A, B, C, maior=0;

   scanf(" %d" , &A);
   if(A>maior) maior = A;

   scanf(" %d" , &B);
   if(B>maior) maior = B;

   scanf(" %d" , &C);
   if(C>maior) maior = C;


   printf("%d eh o maior\n" , maior);

return 0;
}