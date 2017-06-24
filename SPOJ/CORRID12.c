// 2015-05-29 00:01:59 

#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int C;
    int N;

    scanf(" %llu %d" , &C, &N);

    printf("%d" , C%N);

    return 0;
}