#include <stdio.h>


int main(){

    int N, soma=0,i=1, Q;

    scanf(" %d" , &Q);

    while(Q>0){
    soma=0;
    i=1;
    scanf(" %d" , &N);
    while(i<N){
        if(N%i==0) soma += i;
        i++;
    }

    soma == N ? printf("%d eh perfeito\n" , N) :printf("%d nao eh perfeito\n" , N);
    Q--;
    }


return 0;

}