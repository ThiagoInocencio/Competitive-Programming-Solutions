#include <stdio.h>


int main(){

    int  N, i=0, Q;
    float total=0, c[4]= {0,0,0,0};

    char T;

    scanf(" %d" , &N);

    while(i<N){
       scanf(" %d %c" , &Q , &T);
       total+=Q;
       switch(T){
         case 'R' : c[0]+=Q; break;
         case 'S' : c[1]+=Q; break;
         case 'C' : c[2]+=Q; break;
       }
       i++;
    }

    printf("Total: %0.0f cobaias\n" , total);
    printf("Total de coelhos: %0.0f\n" , c[2]);
    printf("Total de ratos: %0.0f\n" , c[0]);
    printf("Total de sapos: %0.0f\n" , c[1]);
    printf("Percentual de coelhos: %0.2f %%\n" , c[2]*100/total);
    printf("Percentual de ratos: %0.2f %%\n" , c[0]*100/total);
    printf("Percentual de sapos: %0.2f %%\n" , c[1]*100/total);


return 0;
}