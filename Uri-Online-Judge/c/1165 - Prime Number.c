#include <stdio.h>
#define MAX 1000

int main(){

  int j, N, X, i=0, resu[MAX][2], cont_r=-1;

  scanf("%d" , &N);

  while(i<N){
  cont_r++;

    scanf(" %d" , &X);
    resu[cont_r][0] = X;

    j=2;
    while(j<=X){
      if(X%j==0) break;
      j++;
    }

    if(j==X) resu[cont_r][1] = 1;
     else resu[cont_r][1] = 0;

    i++;

}

   i=0;
   while(i<=cont_r){
     if(resu[i][1]==1) printf("%d eh primo\n", resu[i][0]);
        else printf("%d nao eh primo\n", resu[i][0]);
    i++;
   }



return 0;
}
