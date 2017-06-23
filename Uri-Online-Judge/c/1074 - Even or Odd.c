#include <stdio.h>


int main(){

    int N, X;

    scanf(" %d" , &N);
    while(N>0){
       scanf(" %d" , &X);
       if(X==0) printf("NULL\n");
       if(X%2==0 && X!=0) printf("EVEN ");
       if(X%2!=0) printf("ODD ");
       if(X>0) printf("POSITIVE\n");
       if(X<0) printf("NEGATIVE\n");


     N--;
    }

return 0;

}