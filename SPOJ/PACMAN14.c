// 2015-05-17 18:21:17 

#include <stdio.h>
#define MAX 110

int main()
{
    int i=0,j=0,N=0, flag=0, cont_atual=0, maior=0;
    char camp[MAX][MAX];

    scanf(" %d" , &N);

    for(i=0; i<N;i++){
        for(j=0;j<N;j++){
            scanf(" %c" , &camp[i][j]);
        }
    }

    i=0;
    while(i<N){
       if(flag==0) {
         j=0;
           while(j<N){
              switch(camp[i][j]){
                case 'o' : cont_atual++; break;
                case 'A' : maior = cont_atual > maior ? cont_atual : maior;
                           cont_atual=0;
                           break;
                  } j++;
              } flag = 1;

           } else {
           j=N-1;
           while(j>=0){
              switch(camp[i][j]){
                case 'o' : cont_atual++; break;
                case 'A' : maior = cont_atual > maior ? cont_atual : maior;
                           cont_atual=0;
                           break;
                  } j--;
              } flag = 0;
           }
          i++;
       }

       maior = cont_atual > maior ? cont_atual : maior;
       printf("%d" , maior);

    return 0;
}
