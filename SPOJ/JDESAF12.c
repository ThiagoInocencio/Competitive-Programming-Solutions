// 2015-05-22 03:32:17 

#include <stdio.h>

int main()
{
    int N, maior=0;

    scanf(" %d" , &N);

    do {
        maior = N > maior ? N : maior;

        scanf(" %d" , &N);
    } while(N!=0);

    printf("%d" , maior);

    return 0;
}