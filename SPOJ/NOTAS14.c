// 2015-05-29 00:53:48

#include <stdio.h>
#include <stdlib.h>
#define MAX 200

int main(){
    int var[MAX], i=0, maior=0, X, N, maior_v=0;

    while(i<101){
        var[i]=0;
        i++;
    }

    scanf(" %d" , &N);

    i=0;
    while(i<N){
        scanf(" %d" , &X);
        var[X]++;
        i++;
    }

    i=0;
    while(i<101){
      if(var[i]>=maior){
        if(i>maior_v){
            maior = var[i];
            maior_v = i;
        }
      }
      i++;
    }

   printf("%d" , maior_v);

    return 0;
}