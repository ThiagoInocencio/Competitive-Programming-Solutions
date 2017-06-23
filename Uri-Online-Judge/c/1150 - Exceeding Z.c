#include <stdio.h>

int main(){


  int x, z,  j, i;
  j = 1;

  scanf(" %d" , &x);

  scanf(" %d" , &z);
  while(z <= x) scanf(" %d" , &z);

  i = x+1;

  while(x<=z){
    x += i;
    j++;
    i++;
  }

  printf("%d\n" , j);

 return 0;
}