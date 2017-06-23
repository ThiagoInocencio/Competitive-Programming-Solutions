#include <stdio.h>

int main(){

  int N, i=1;

  scanf(" %d" , &N);

  while(i<=N){
    printf("%d %d %d\n" , i, i*i, i*i*i);
    i++;
  }

return 0;
}