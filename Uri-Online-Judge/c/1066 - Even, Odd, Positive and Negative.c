#include <stdio.h>


int main(){


     int i=0, cont[5] = {0,0,0,0,0}, X;

     while(i<5){
        scanf(" %d" , &X);
        if(X%2==0) cont[0]++;
        if(X%2!=0) cont[1]++;
        if(X>0) cont[2]++;
        if(X<0) cont[3]++;
        i++;
     }

     printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n" , cont[0] , cont[1] , cont[2] , cont[3]);

return 0;

}