// 2015-05-29 01:49:19

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double N, resu[100];
    int cont=0 , i;

    scanf(" %lf" , &N);

    while(N!=0){
    resu[cont] = pow(2,N)-1;
    cont++;

    scanf(" %lf" , &N);
    }

    i=0;
    while(i<cont){
      printf("\nTeste %d\n%0.0lf\n", i+1 , resu[i] );
      i++;
    }


    return 0;
}
