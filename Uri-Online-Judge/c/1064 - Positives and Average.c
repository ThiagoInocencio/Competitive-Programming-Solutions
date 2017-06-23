#include <stdio.h>


int main(){


     double i=0, cont=0,X, media=0;

     while(i<6){
        scanf(" %lf" , &X);
        if(X>0) {
          cont++;
          media += X;
        }
        i++;
     }

     printf("%0.0lf valores positivos\n%0.1lf\n" , cont , media/cont);

return 0;

}