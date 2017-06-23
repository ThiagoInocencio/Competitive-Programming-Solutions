#include <stdio.h>


int main(){


     int X, Y;

     scanf(" %d %d" , &X, &Y);
     while(X!=0 || Y!=0){

     printf("%d\n" , X+Y);

     scanf(" %d %d" , &X, &Y);
     }


return 0;

}
