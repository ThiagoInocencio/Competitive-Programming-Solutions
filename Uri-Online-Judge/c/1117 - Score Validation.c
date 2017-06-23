#include <stdio.h>


int main(){

    double nota, media=0, cont_v=0;

    do{
    scanf(" %lf" , &nota);
    if(nota>=0.0 && nota<=10.0){
        cont_v++;
        media += nota;
    } else printf("nota invalida\n");

    } while(cont_v<2);

    printf("media = %0.2lf\n" , media/2);

return 0;
}