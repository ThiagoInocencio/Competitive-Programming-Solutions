#include <stdio.h>


int main(){

   int op;
   float qtd;

   scanf(" %d %f" , &op, &qtd);

   switch(op){
      case 1 : printf("Total: R$ %0.2f\n" , qtd*4.00); break;
      case 2 : printf("Total: R$ %0.2f\n" , qtd*4.50); break;
      case 3 : printf("Total: R$ %0.2f\n" , qtd*5.00); break;
      case 4 : printf("Total: R$ %0.2f\n" , qtd*2.00); break;
      case 5 : printf("Total: R$ %0.2f\n" , qtd*1.50); break;
  }

return 0;

}