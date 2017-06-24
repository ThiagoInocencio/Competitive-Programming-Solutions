#include <stdio.h>

int main()
{

    int  j, i ,N, temp=0, resul[10000], cont_r=-1, X, Y;

    scanf(" %d" , &N);
    do{
    cont_r++;

    temp=0;

    i=0;
    while(i<N){
        scanf(" %d %d" , &X, &Y);
        temp += X;
        temp -= Y;
        resul[cont_r] = temp;
        cont_r++;
        i++;
     }

     resul[cont_r] = 9999;

     scanf(" %d" , &N);
    } while(N!=0);

    i=0;
    j=0;
    while(i<cont_r) {
    j++;
       printf("\n\nTeste %d" , j);

        while(resul[i]!=9999){
            printf("\n%d" , resul[i]);
            i++;
        }

       i++;
    }
 return 0;
}
