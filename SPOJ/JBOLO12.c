// 2015-05-19 01:56:07 

#include <stdio.h>

int main()
{

    int A, B, C, qtd=0;

    scanf(" %d %d %d" , &A, &B, &C);


    while((A>=2) && (B>=3) && (C>=5)){
        A -= 2;
        B -= 3;
        C -= 5;
        qtd++;
    }

    printf("%d", qtd);

    return 0;
}