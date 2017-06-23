#include <stdio.h>
#define MAX 1010

int main(){

  int X[MAX], i=0 , N, menor = 999999, p_menor;

   scanf(" %d" , &N);

   while(i<N){
     scanf(" %d" , &X[i]);
     if(X[i]<menor){
        menor = X[i];
        p_menor = i;
     }
     i++;
   }

   printf("Menor valor: %d\nPosicao: %d\n" , menor, p_menor);

return 0;
}
