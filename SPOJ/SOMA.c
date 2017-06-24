// 2015-05-18 20:14:09 

#include <stdio.h>

int main()
{

    int N, X, tot=0;

    scanf("%d" , &N);

    while(N>0){
        scanf("%d" , &X);

        tot += X;
        N--;
    }

    printf("%d" , tot);

  return 0;

}