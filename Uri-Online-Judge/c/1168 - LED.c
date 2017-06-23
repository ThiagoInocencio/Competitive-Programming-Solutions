#include <stdio.h>
#include <string.h>


int main(){

    char V[100];
    int i, N, tam, j, qtd_l=0;

    scanf(" %d" , &N);
    while(N>0){

       scanf(" %s" , V);

       qtd_l=0;

       tam = strlen(V);

       j=0;
       while(j<=tam){
          switch(V[j]){
             case '0':  qtd_l += 6 ; break;
             case '1':  qtd_l += 2 ; break;
             case '2':  qtd_l += 5 ; break;
             case '3':  qtd_l += 5 ; break;
             case '4':  qtd_l += 4 ; break;
             case '5':  qtd_l += 5; break;
             case '6':  qtd_l += 6; break;
             case '7':  qtd_l += 3; break;
             case '8':  qtd_l += 7; break;
             case '9':  qtd_l += 6; break;
          }

         j++;
       }

       printf("%d leds\n" , qtd_l);

    N--;
    }

return 0;

}