#include <stdio.h>

int main(){

    int N, i;

    scanf(" %d" , &N);
    while(N!=0){
        i=1;
        while(i<=N){
            if(i==N){
            printf("%d" , i);
            } else
            printf("%d " , i);
            i++;
        }
      printf("\n");
    scanf(" %d" , &N);
    }
    
return 0;
}