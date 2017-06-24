// 2015-05-17 06:36:27 

#include <stdio.h>
#define MAX 85

int main()
{
  int i, acert=0, n;
  char resp[MAX], gaba[MAX];

  scanf(" %d" , &n);

  scanf(" %s", resp);
  scanf(" %s", gaba);

  for(i=0;i<n;i++){
    if(gaba[i]==resp[i]) acert++;
  }

  printf("\n%d" , acert);

  return 0;
}
