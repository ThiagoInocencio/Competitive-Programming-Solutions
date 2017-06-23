#include <stdio.h>


int main(){

    int N, tempo[3] = {0,0,0};

    scanf(" %d" , &N);

    while(N>0){
        if(N>=3600){
            tempo[0]++;
            N -= 3600;
        }
        else if(N>=60){
            tempo[1]++;
            N -= 60;
        } else if(N>0){
            tempo[2]++;
            N -= 1;
         }
       }

    printf("%d:%d:%d\n",tempo[0], tempo[1],tempo[2]);

return 0;

}