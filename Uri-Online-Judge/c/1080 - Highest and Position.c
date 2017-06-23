#include <stdio.h>


int main(){

   int X, i=0, maior=0, maior_p=0;

   while(i<100){
      scanf(" %d" , &X);
      if(X>maior){
         maior=X;
         maior_p=i+1;
      }
      i++;

   }
   
   printf("%d\n%d\n" , maior, maior_p);


return 0;

}