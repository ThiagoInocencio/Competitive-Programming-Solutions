// 2015-05-20 20:16:59 

#include <stdio.h>

int main()
{
    int  N,soma=0, X, pp;

    scanf("%d" , &N);

    while(N>0) {

      scanf(" %d" , &X);
      soma += X;

      N--;
    }
    
    scanf(" %d" , &pp);

    pp == soma ? printf("Acertou\n") : printf("Errou\n");

 return 0;
}