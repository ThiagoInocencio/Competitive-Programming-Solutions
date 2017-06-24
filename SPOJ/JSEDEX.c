// 2015-05-18 19:08:59 

#include <stdio.h>

int main()
{

   int N, A, L, P;

   scanf(" %d" , &N);
   scanf(" %d %d %d" , &A, &L, &P);

   N <= A && N <= L && N <= P ? printf("S") : printf("N");

return 0;

}