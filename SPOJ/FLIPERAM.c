// 2015-05-12 04:51:15 

#include <stdio.h>
#define MAX 10000

int main()
{

    int M, N, pontu[MAX], i=0, j=0, maior=0, k=0;

    scanf(" %d %d", &N, &M);

    while(i<N){
        scanf("%d" , &pontu[i]);
        i++;
     }

    i=0;

    while(i<M){
        j=0;
        maior=0;
        while(j<N){
            if(pontu[j]>maior) {
            maior=pontu[j];
            k=j;
            }
            j++;
        }
        printf("\n%d" , maior);
        pontu[k]=-1;
        i++;
    }

    return 0;
}
