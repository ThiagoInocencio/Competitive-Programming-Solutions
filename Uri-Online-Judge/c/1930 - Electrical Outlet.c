#include <stdio.h>

int main(){
	
	int x, sum=0, i=0;
	
     while(i<4){
     	scanf(" %d" , &x);
     	sum +=x;
     	i++;
     }
     
     printf("%d\n" , sum-3);
	
}