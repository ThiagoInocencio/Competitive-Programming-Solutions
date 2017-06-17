#include <stdio.h>
#include <iostream>

#define DIA 60*24*60
#define HORA 60*60
#define MINUTO 60

using namespace std;

int d1, h1, m1, s1;
int d2, h2, m2, s2;
int contagem = 0; 
int cont_d=0, cont_h=0, cont_m=0, cont_s=0;
char str[100];

int main() {

    cin >> str >> d1 >> h1 >> str >> m1 >> str >> s1;
    cin >> str >> d2 >> h2 >> str >> m2 >> str >> s2;

    contagem = contagem + (((d2)-(d1+1))*DIA);

    contagem = contagem + ((60-s1) + ((60-m1-1)*MINUTO) + ((24-h1-1)*HORA));

    contagem = contagem +  ((s2) + (m2*MINUTO) + (h2*HORA));

    while(contagem > 0) {
        if(contagem >= DIA) {
            cont_d++;
            contagem = contagem - DIA;
        } else if(contagem >= HORA) {
            cont_h++;
            contagem = contagem - HORA;
        } else if(contagem >= MINUTO) {
            cont_m++;
            contagem = contagem - MINUTO;
        } else {
           cont_s++;
           contagem = contagem - 1;
        }
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n" , cont_d, cont_h, cont_m, cont_s);

	return 0;
}
