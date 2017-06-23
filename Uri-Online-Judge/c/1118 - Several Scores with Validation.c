#include <stdio.h>

int main(){

  float media, x, y;
  int op;


  do{

  scanf(" %f" , &x);
  while((x<0) || (x >10)) {
      printf("nota invalida\n");
      scanf(" %f" , &x);
  }

  scanf(" %f" , &y);
  while((y<0) || (y >10)) {
      printf("nota invalida\n");
      scanf(" %f" , &y);
  }

  printf("media = %0.2f\n" , (x+y)/2);


  op = 4;
  while( (op!=1) && (op!=2)){
   printf("novo calculo (1-sim 2-nao)\n");
   scanf(" %d" , &op);
  }

  } while(op==1);


  return 0;
}