// 2015-05-22 18:40:15 

#include <stdio.h>
#define MAX 50010

int main()
{
    int N, M, fila_e[MAX], i, X, k;

    scanf(" %d" , &N);
    i=0;
    while(i<N){
        scanf(" %d" , &fila_e[i]);
        i++;
    }

    scanf(" %d" , &M);
    k=0;
    while(k<M){
        scanf(" %d" , &X);
        i=0;
        while(i<N){
            if(fila_e[i]==X){
                fila_e[i]=0;
                i=N;
            }
          i++;
        }
       k++;
    }

    i=0;
     while(i<N){
        if(fila_e[i]!=0){
           printf("%d " , fila_e[i]);
        }
       i++;
     }

   return 0;
}