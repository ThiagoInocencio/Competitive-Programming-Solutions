#include <stdio.h>

int main(){

    int N, K, x;

    scanf(" %d" , &N);

    while(N>0){
        scanf(" %d" , &K);
        while(K>0){
            scanf(" %d" , &x);
            switch(x){
               case 1 : printf("Rolien\n"); break;
               case 2 : printf("Naej\n"); break;
               case 3 : printf("Elehcim\n"); break;
               case 4 : printf("Odranoel\n"); break;
            }
        	K--;
        }
    
    	N--;
    }

	return 0;
}