#include <stdio.h>

int main(){

    int X, Y,i=0, k;

    scanf(" %d" , &X);

    while(i<1000){
      k=0;
      while(k<X && i<1000){
        printf("N[%d] = %d\n", i , k);
        k++;
        i++;
      }
    }

return 0;
}