// 2015-05-18 18:18:02 

#include <stdio.h>
int main()
{

   unsigned long long int N;
   int i=2;

   scanf(" %llu", &N);

   while(i<=N){
     if(N%i==0) break;
     else i++;
   }


   i == N ? printf("sim") : printf("nao");

return 0;
}