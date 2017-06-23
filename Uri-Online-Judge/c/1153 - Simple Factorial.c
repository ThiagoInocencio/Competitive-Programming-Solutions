#include <stdio.h>

int main(){

  int N, i;

  scanf(" %d" , &N);

  i=1;
  while(N>0){
    i *= N;
    N--;
  }

  printf("%d\n" , i);


return 0;
}