// 2015-05-11 02:48:48

#include <stdio.h>

#define MAX 100

int main()
{
    int N, M, i, j, camp[MAX][MAX], som_l=0, som_c=0, cont_l=0, cont_c=0;

    scanf(" %d %d" , &N, &M);

    for(i=0; i<N; i++){
        cont_l = 0;
        for(j=0;j<M;j++){
            scanf(" %d" , &camp[i][j]);
            cont_l += camp[i][j];
        }
        som_l = cont_l > som_l ? cont_l : som_l;
    }

    for(j=0;j<M;j++){
        cont_c=0;
        for(i=0;i<N;i++){
          cont_c += camp[i][j];
        }
        som_c = cont_c > som_c ? cont_c : som_c;
    }

    som_l > som_c ? printf("%d",som_l) : printf("%d",som_c);

    return 0;
}
