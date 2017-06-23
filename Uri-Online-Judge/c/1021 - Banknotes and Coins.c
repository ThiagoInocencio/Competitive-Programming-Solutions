#include <stdio.h>


int main(){

    int cont[13] = {0,0,0,0,0,0,0,0,0,0,0,0}, N, M;

    scanf("%d.%d" , &N , &M);

    while(N>0 || M>0){
        if(N>=100){
            cont[0]++;
            N -= 100;
        } else if(N>=50){
            cont[1]++;
            N -= 50;
        } else if(N>=20){
            cont[2]++;
            N -= 20;
        } else if(N>=10){
            cont[3]++;
            N -= 10;
        } else if(N>=5){
            cont[4]++;
            N -= 5;
        } else if(N>=2){
            cont[5]++;
            N -= 2;
        } else if(N>=1){
            cont[6]++;
            N -= 1;
        }

        if(M>=50){
           cont[7]++;
            M -= 50;
        } else if(M>=25){
           cont[8]++;
            M -= 25;
        } else if(M>=10){
           cont[9]++;
            M -= 10;
        } else if(M>=5){
           cont[10]++;
            M -= 5;
        } else if(M>=1){
           cont[11]++;
            M -= 1;
        }

   }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n" , cont[0]);
    printf("%d nota(s) de R$ 50.00\n" , cont[1]);
    printf("%d nota(s) de R$ 20.00\n" , cont[2]);
    printf("%d nota(s) de R$ 10.00\n" , cont[3]);
    printf("%d nota(s) de R$ 5.00\n" , cont[4]);
    printf("%d nota(s) de R$ 2.00\n" , cont[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n" , cont[6]);
    printf("%d moeda(s) de R$ 0.50\n" , cont[7]);
    printf("%d moeda(s) de R$ 0.25\n" , cont[8]);
    printf("%d moeda(s) de R$ 0.10\n" , cont[9]);
    printf("%d moeda(s) de R$ 0.05\n" , cont[10]);
    printf("%d moeda(s) de R$ 0.01\n" , cont[11]);


return 0;

}