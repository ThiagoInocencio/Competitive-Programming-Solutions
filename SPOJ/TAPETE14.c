// 2015-05-18 02:14:15

#include <stdio.h>

int main()
{
    unsigned long long int L=0, N=0, temp, soma=0;

    scanf(" %llu %llu" , &L, &N);

    temp = L-(N-1);
    soma = temp*temp+(N-1);

    printf("%llu", soma);


    return 0;

}