#include <stdio.h>

int main(){


int N, cont;
double C;

scanf(" %d" , &N);
while(N>0){
   cont = 0;
   scanf(" %lf" , &C);
   while(C>1){
     C /= 2;
     cont++;
   }

   printf("%d dias\n", cont);

   N--;
}


return 0;
}