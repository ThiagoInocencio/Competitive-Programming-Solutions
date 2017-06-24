// 2015-05-17 07:01:54 

#include <stdio.h>
#define MAX 1000

int main()
{
  int R, A, B, cont_a, cont_b, i=0, resul[MAX], j;

  scanf(" %d" , &R);
  cont_a=0;
  cont_b=0;

  while(R!=0){
    i++;
    j=0;
    cont_a=0;
    cont_b=0;
      while(j<R){
        scanf(" %d",&A);
        scanf(" %d",&B);
        cont_a += A;
        cont_b += B;
        j++;
      }

      resul[i-1] = cont_a > cont_b ? 1 : 2;
      scanf(" %d" , &R);
  }

  j=0;

  while(j<i){
    printf("\nTeste %d\n" , j+1);
    resul[j] == 2 ? printf("Beto\n") : printf("Aldo\n");
    j++;
  }

  return 0;
}
