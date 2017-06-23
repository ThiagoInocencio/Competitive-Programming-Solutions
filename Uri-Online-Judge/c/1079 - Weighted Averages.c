#include <stdio.h>


int main(){

    double n1, n2, n3;
    int N;

    scanf(" %d" , &N);

    while(N>0){
        scanf(" %lf %lf %lf" , &n1, &n2, &n3);
        printf("%0.1lf\n" , ((n1*2)+(n2*3)+(n3*5))/10);
      N--;
    }

return 0;

}