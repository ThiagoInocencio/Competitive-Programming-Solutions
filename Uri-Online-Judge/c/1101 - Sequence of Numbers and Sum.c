#include <stdio.h>


int main(){

    int X, Y, soma=0, i;

    scanf(" %d %d" , &X, &Y);
    while(Y>0 && X>0){
    soma=0;

        if(X>Y){
            for(i=Y;i<=X;i++){
                soma += i;
                if(i==X) printf("%d Sum=%d\n", i , soma);
                else printf("%d " , i);
            }
        } else if(Y>X) {
           for(i=X;i<=Y;i++){
                soma += i;
                if(i==Y) printf("%d Sum=%d\n", i , soma);
                else printf("%d " , i);
            }
        }

    scanf(" %d %d" , &X, &Y);
    }


return 0;

}