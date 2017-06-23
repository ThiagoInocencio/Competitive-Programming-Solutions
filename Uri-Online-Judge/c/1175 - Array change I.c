#include <stdio.h>

int main(){

  int X[21], i=19;

   while(i>=0){
    scanf(" %d" , &X[i]);
    i--;
  }

  i=0;
  while(i<20){
    printf("N[%d] = %d\n", i, X[i]);
    i++;
  }


return 0;
}