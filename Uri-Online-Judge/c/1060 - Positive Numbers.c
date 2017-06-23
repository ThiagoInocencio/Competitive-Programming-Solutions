#include <stdio.h>


int main(){


     double i=0, cont=0,X;

     while(i<6){
        scanf(" %lf" , &X);
        if(X>0) cont++;
        i++;
     }

     printf("%0.0lf valores positivos\n" , cont);

return 0;

}