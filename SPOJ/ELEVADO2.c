// 2015-05-21 04:11:33 

#include <stdio.h>

int main()
{
    int N, C, S, E, exe, cap_at=0;

    scanf(" %d %d" , &N , &C);

    exe = 0;
    while(N>0){
       scanf(" %d %d" , &S, &E);
       cap_at -= S;
       cap_at += E;

       if(cap_at > C) exe = 1;

     N--;
    }

    exe ? printf("S") : printf("N");

 return 0;

}
