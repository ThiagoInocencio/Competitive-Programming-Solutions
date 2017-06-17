#include <stdio.h>

int main(){

    int i=0;
    double N[101], X;

    scanf(" %lf" , &X);

    while(i<100){
        printf("N[%d] = %0.4lf\n", i , X);
        X /= 2;
        i++;
    }

}