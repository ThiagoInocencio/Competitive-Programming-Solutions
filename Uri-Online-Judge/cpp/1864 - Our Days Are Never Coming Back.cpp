#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	
	char text[34] = {'L', 'I', 'F', 'E', ' ', 'I','S', ' ', 'N', 'O' ,'T', ' ', 'A' , ' ' , 'P', 'R', 'O' , 'B' , 'L' , 'E' , 'M' , ' ', 'T' , 'O', ' ', 'B', 'E',' ','S','O','L','V','E','D'};
	int N, i;
	
	scanf("%d" , &N);
	
	for(i=0;i<N;i++) {
		printf("%c",text[i]);
	}
	
	printf("\n");
	
	return 0;
}