#include <stdio.h>

int main(){

    int N, dia[3] = {0,0,0};

    scanf(" %d" , &N);

    while(N>0){
        if(N>=365){
            dia[0]++;
            N -= 365;
        } else if(N>=30){
            dia[1]++;
            N -= 30;
        }else if(N>0){
            dia[2]++;
            N -= 1;
        }
     }

     printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n" , dia[0] , dia[1] , dia[2]);

return 0;

}