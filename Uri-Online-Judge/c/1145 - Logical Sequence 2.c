#include <stdio.h>

int main(){

    int X, Y,i=1, k;

    scanf(" %d %d" , &X, &Y);

    while(i<Y){
      k=1;
      while(k<=X){
        if(k==X) printf("%d" , i);
        else printf("%d " , i);
        k++;
        i++;
      }
     printf("\n");
    }

return 0;
}