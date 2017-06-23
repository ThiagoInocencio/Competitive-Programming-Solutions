#include <stdio.h>


int main(){

    int A, N, soma=0;

    scanf(" %d" , &A);
    soma = A;
    A++;

    do{
    scanf(" %d" , &N);
    } while(N<1);

    while(N-1>0){
        soma += A;
        A++;
        N--;
    }

    printf("%d\n" , soma);


return 0;

}