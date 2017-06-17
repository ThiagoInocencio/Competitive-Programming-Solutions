#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int V, tamanho;
char cadeia[50];

int main() {

	cin >> V;
    
    sprintf(cadeia, "%x" , V);
	tamanho = strlen(cadeia);
	
	for(int i = 0; i < tamanho; i++) 
		if(cadeia[i]>=97) printf("%c" , cadeia[i]-32);
		  else printf("%c" , cadeia[i]);
		  
    cout << "\n";

	return 0;
}