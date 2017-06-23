#include <stdio.h>

int main(){


   int N, x, y, i, sum;
   i = 0;
   sum = 0;

   scanf(" %d" , &N);

   while(N>0){

     sum = 0;

     scanf(" %d %d" , &x, &y);

     while(y>0){
      if(x%2!=0) {
        sum += x;
        y--;
        }
       x++;
     }

    printf("%d\n" , sum);

    N--;
   }


  return 0;
}