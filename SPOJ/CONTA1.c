// 2015-05-18 01:28:03

#include <stdio.h>

int main()
{
    int N=0, cont=0;

    scanf(" %d" , &N);

    if(N<=10) printf("7");
      else if(N<=30){
         cont = N-10;
         N = cont*1+7;
         printf("%d",N);
      } else if(N<=100) {
         cont = N-30;
         N = cont*2+7+20;
         printf("%d",N);
      } else {
         cont = N-100;
         N = cont*5+7+20+140;
         printf("%d",N);
      }
 
   return 0;

}