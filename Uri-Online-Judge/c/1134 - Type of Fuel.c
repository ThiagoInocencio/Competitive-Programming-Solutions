#include <stdio.h>

int main(){

    int tipo[4] = {0,0,0,0} , N;

    scanf(" %d" , &N);
    while(N!=4){

    switch(N){
      case 1: tipo[0]++; break;
      case 2: tipo[1]++; break;
      case 3: tipo[2]++; break;

    }

    scanf(" %d" , &N);
}

   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", tipo[0] , tipo[1] , tipo[2]);

return 0;
}