#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char letra[55];
	int flag=0; // 0 for upper | 1 for lower
	int tamanho, i;

	while(gets(letra) != NULL) {

	   tamanho = strlen(letra);

       flag=0;

		for(i=0;i < tamanho; i++) {
			if(letra[i] != ' ') {
				if(flag==1) {
					if(letra[i]>=97)  cout << letra[i];
					 else printf("%c" , letra[i] + 32);

					 flag = 0;
				} else {
					if(letra[i]>=65 && letra[i]<=90) cout << letra[i];
					 else printf("%c" , letra[i] - 32);

					 flag = 1;
				}
			} else
			   cout << " ";
		}

    cout << "\n";

	}

	return 0;
}
