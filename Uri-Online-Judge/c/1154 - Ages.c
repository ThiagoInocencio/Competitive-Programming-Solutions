#include <stdio.h>


int main(){

    double I, total=0, cont=0;

    scanf(" %lf" , &I);
    while(I>=0){
       total += I;
       cont++;
       scanf(" %lf" , &I);
    }

    printf("%0.2f\n" , total/cont);

return 0;
}