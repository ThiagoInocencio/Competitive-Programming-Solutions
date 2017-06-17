#include <stdio.h>

int main(){

    int N, i=1,k;

    scanf(" %d" , &N);

    while(N>0){
        k=0;
        while(k<3){
         printf("%d ", i);
         i++;
         k++;
        }
     i += 1;
     printf("PUM\n");
     N--;
    }

return 0;
}