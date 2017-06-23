#include <stdio.h>

int main(){
	
	int A[6], B[6], i=0, compativel=1;
	
	while(i<5){
		scanf("%d" , &A[i]);	
		i++;	
	}
	
	i=0;
	
	while(i<5){
		scanf("%d" , &B[i]);	
	    if(A[i]==B[i]) 	compativel=0;
	    i++;
	}
	
	if(compativel) printf("Y\n");
	else printf("N\n");
	
	
	
	return 0;
}