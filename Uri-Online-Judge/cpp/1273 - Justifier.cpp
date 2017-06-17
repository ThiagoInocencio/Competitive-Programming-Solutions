#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int N, tam, dif, maior=0.0, i , j, k;
char str[55][100];

int main() {

    cin >> N;
	while( N != 0) {

		maior = 0.0;
		dif = 0.0;
		tam = 0.0;

		for(i=0; i<N; i++){
			cin >> str[i];
			tam = strlen(str[i]);
			if(tam > maior)
				maior = tam;
		}

		for(i=0; i<N; i++) {
			tam = strlen(str[i]);
			dif = maior - tam;
			for(j=0; j<dif; j++)
				printf(" ");

			for(k=0; k<tam; k++)
				printf("%c" , str[i][k]);

			printf("\n");
		}

        cin >> N;
        if(N!=0) printf("\n");

	}
	return 0;
}
