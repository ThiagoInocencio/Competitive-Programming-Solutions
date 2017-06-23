#include <stdio.h>

int main(){

    int A, B, sum_a=0, sum_b=0, N, i;

    scanf(" %d" , &N);
    while(N!=0){
       i=N;
       sum_a = 0;
       sum_b = 0;
         while(i>0){
           scanf(" %d %d" , &A, &B);
           if(A>B) sum_a++;
            else if(B>A) sum_b++;
            i--;
         }

     printf("%d %d\n" , sum_a, sum_b);

     scanf(" %d" , &N);
    }


	return 0;
}