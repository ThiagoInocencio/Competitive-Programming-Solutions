// 2015-05-21 03:20:13

#include <stdio.h>
#define MAX 101

int main()
{
    int ma[MAX][MAX], N, i, j, maior=0, cont=0, resul[1000], cont_r=0;


    scanf(" %d" , &N);
    cont++;

    do{
    maior=0;

    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
         scanf(" %d" , &ma[i][j]);
      }
    }

    for(j=0;j<N;j++){
      for(i=0;i<N;i++){
         cont += ma[i][j];
      }
      if(cont>maior) maior = cont;
      cont=0;
    }

    resul[cont_r] = maior;
    cont_r++;

    scanf(" %d" , &N);
    } while(N!=0);


    i=0;
    while(i<cont_r){
        printf("\n%d" , resul[i]);
        i++;
    }

    return 0;
}