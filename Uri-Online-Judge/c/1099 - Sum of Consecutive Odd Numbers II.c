#include <stdio.h>


int main(){

    int X, Y, soma=0, i, N;


    scanf(" %d" , &N);

    while(N>0){
    soma=0;
    scanf(" %d %d" , &X, &Y);

    if(X>Y){
        for(i=Y+1;i<=X-1;i++){
          if(i%2!=0) soma += i;
        }
    } else if(Y>X){
        for(i=X+1;i<=Y-1;i++){
            if(i%2!=0) soma += i;
        }
    }

   printf("%d\n" , soma);
   N--;
    }

return 0;

}