#include <stdio.h>


int main(){

    int valor_t, valor=0, notas[10] = {0,0,0,0,0,0,0,0,0,0};

    scanf(" %d" , &valor);
    valor_t=valor;

    while(valor>0){

        if(valor>=100){
            notas[0]++;
            valor -= 100;
        } else if(valor>=50){
            notas[1]++;
            valor -= 50;
        } else if(valor>=20){
            notas[2]++;
            valor -= 20;
       } else if(valor>=10){
            notas[3]++;
            valor -= 10;
       } else if(valor>=5){
            notas[4]++;
            valor -= 5;
       } else if(valor>=2){
            notas[5]++;
            valor -= 2;
       } else  {
            notas[6]++;
            valor -= 1;
       }

    }

    printf("%d\n",valor_t);
    printf("%d nota(s) de R$ 100,00\n" , notas[0]);
    printf("%d nota(s) de R$ 50,00\n" , notas[1]);
    printf("%d nota(s) de R$ 20,00\n" , notas[2]);
    printf("%d nota(s) de R$ 10,00\n" , notas[3]);
    printf("%d nota(s) de R$ 5,00\n" , notas[4]);
    printf("%d nota(s) de R$ 2,00\n" , notas[5]);
    printf("%d nota(s) de R$ 1,00\n" , notas[6]);



return 0;

}