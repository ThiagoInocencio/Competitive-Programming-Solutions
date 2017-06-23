#include <stdio.h>

int main(){

    int i=0 ,N;
    double A, B;
    scanf(" %d" , &N);
    while(i<N){
       scanf(" %lf %lf" , &A, &B);
       if(B==0) printf("divisao impossivel\n");
       else printf("%0.1lf\n" , A/B);
       i++;
    }


return 0;
}