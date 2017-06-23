#include <stdio.h>


int main(){

   int N=0,i=2;

   scanf(" %d" , &N);

   while(i<=10000){

      if(i%N==2) printf("%d\n" , i);

    i++;
   }

return 0;

}