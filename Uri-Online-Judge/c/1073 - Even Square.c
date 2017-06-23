#include <stdio.h>


int main(){

   int N=0,i=2;

   scanf(" %d" , &N);

   while(i<=N){
      printf("%d^2 = %d\n" , i , i*i);
      i += 2;
   }

return 0;

}