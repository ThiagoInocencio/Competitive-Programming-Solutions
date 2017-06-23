#include <stdio.h>

int main(){
	
	int x, cont_s=0, cont_n=0, N;

	scanf(" %d" , &N);
    while(N>0){
  
        scanf(" %d" , &x);

        if(x==1) cont_s++;
         else cont_n++;

    	N--;
    }

    if(cont_s>=cont_n )
    	printf("N\n");
    else printf("Y\n");

	return 0;
}