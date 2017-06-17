#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {

	int N, forc;
	char name[10];

	scanf("%d" , &N);

	while(N>0) {
		scanf("%s" , name);
		scanf("%d" , &forc);
		if(strcmp(name,"Thor")==0) printf("Y\n");
		 else printf("N\n");

		N--;
	}

	return 0;
}