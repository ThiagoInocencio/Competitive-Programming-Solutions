// 2015-05-18 01:34:40

#include <stdio.h>

int main()
{
    int X=0, Y=0;

    scanf(" %d %d" , &X, &Y);

    X >= 0 && X <= 432 && Y >=0 && Y <= 468 ? printf("dentro") : printf("fora");


   return 0;

}