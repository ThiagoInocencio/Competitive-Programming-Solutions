#include <stdio.h>

int main(){

    int N, i=0, fib_i=1,fib_f=1;

    scanf(" %d" , &N);

    while(i<N){

       if(i<1){
          printf("0 ");
       } else if(i<2){
          printf("1 ");
         }else {
          if(i==N-1) printf("%d\n" , fib_f);
          else{
          printf("%d " , fib_f);
          fib_f = fib_f+fib_i;
          fib_i = fib_f-fib_i;
          }
       }
       i++;
    }

}