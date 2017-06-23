#include <stdio.h>


int main(){

    int h_i, h_f;

    scanf(" %d %d", &h_i, &h_f);

    if(h_i<h_f) printf("O JOGO DUROU %d HORA(S)\n" , h_f-h_i);
    else printf("O JOGO DUROU %d HORA(S)\n" , (24-h_i)+h_f);

return 0;

}