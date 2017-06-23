#include <stdio.h>


int main(){

    int i=0, t_p=0, t_i=0, X, par[5] , impar[5], k;

    while(i<15){

     scanf(" %d" , &X);

     if(X%2==0){
        par[t_p] = X;
        if(t_p==4){
           k=0;
           while(k<5){
             printf("par[%d] = %d\n" , k, par[k]);
             k++;
           }
          t_p = 0;
        } else t_p++;
     } else if(X%2!=0){
        impar[t_i] = X;
        if(t_i==4){
           k=0;
           while(k<5){
             printf("impar[%d] = %d\n" , k, impar[k]);
             k++;
           }
          t_i = 0;
        } else t_i++;
     }

     i++;
    }

    i=0;
    while(i<t_i){
       printf("impar[%d] = %d\n" , i, impar[i]);
       i++;
    }

    i=0;
    while(i<t_p){
       printf("par[%d] = %d\n" , i, par[i]);
       i++;
    }

return 0;

}