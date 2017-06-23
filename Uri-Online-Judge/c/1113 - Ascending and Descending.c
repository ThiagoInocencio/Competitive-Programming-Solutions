#include <stdio.h>

int main(){

    int A, B;

    scanf(" %d %d" , &A, &B);
    while(A!=B){
       if(A>B) printf("Decrescente\n");
       if(A<B) printf("Crescente\n");
       scanf(" %d %d" , &A, &B);
    }


return 0;
}
