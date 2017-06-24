// 2015-05-19 01:11:10

#include <stdio.h>

int main()
{

    int N, fat=1;

    scanf(" %d" , &N);

    while(N>0){
      fat *= N;
      N--;
    }

    printf("%d" , fat);

    return 0;
}