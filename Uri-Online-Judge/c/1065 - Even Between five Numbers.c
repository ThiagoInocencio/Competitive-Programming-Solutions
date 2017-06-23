#include <stdio.h>


int main(){


     int i=0, cont=0,X;

     while(i<5){
        scanf(" %d" , &X);
        if(X%2==0) cont++;
        i++;
     }

     printf("%d valores pares\n" , cont);

return 0;

}