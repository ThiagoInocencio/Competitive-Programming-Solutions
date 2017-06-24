#include <stdio.h>

int main()
{

    int N , X, gan[3], i = 0,jog=-1;

    scanf(" %d" , &N);

    while(N != 0){
    jog++;

    i=0;
    while(i<N){

        scanf(" %d" , &X);

        if(X == i+1) {
            gan[jog] = i+1;
        }
      i++;
    }

    scanf(" %d" , &N);

    }

    i=0;
    while(i<=jog){
        printf("\nTeste %d\n%d\n" , i+1 , gan[i]);
        i++;
    }
    return 0;
}