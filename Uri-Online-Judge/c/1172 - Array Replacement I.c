#include <stdio.h>

int main(){

  int X[11], i=0;

   while(i<10){
    scanf(" %d" , &X[i]);
    if(X[i]<=0) X[i] = 1;
    i++;
  }

  i=0;
  while(i<10){
    printf("X[%d] = %d\n", i, X[i]);
    i++;
  }


return 0;
}
