#include <stdio.h>

int main(){


   int x, i, sum;
   sum = 0;

    sum = 0;

    scanf(" %d" , &x);
    while(x!=0){

    sum = 0;

    i = 1;
    while(i<=5){
       if(x%2!=0) x++;
         else{
           sum += x;
           x += 2;
           i++;
         }
    }

    printf("%d\n" ,  sum);

   scanf(" %d" , &x);
   }


  return 0;
}