#include <stdio.h>


int main(){

    int X, Y, cont=0, op=1, resu[3]= {0,0,0};


    while(op==1){
    scanf(" %d %d" , &X, &Y);
     if(X>Y) resu[0]++;
     else if(X<Y) resu[1]++;
     else resu[2]++;
     cont++;
     printf("Novo grenal (1-sim 2-nao)\n");
     scanf(" %d" , &op);
    }

    printf("%d grenais\n" , cont);
    printf("Inter:%d\n" , resu[0]);
    printf("Gremio:%d\n" , resu[1]);
    printf("Empates:%d\n" , resu[2]);

    if(resu[0]>resu[1]) printf("Inter venceu mais\n");
    else if(resu[1]>resu[0]) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");

}
