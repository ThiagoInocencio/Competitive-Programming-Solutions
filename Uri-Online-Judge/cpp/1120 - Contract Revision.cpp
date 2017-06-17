#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char A, B[200];
int tam, cont=0, i;


int main() {

	while(cin >> A >> B, A != '0' && strcmp(B,"0")!=0) {

		cont=0;
		tam = strlen(B);

		for(i = 0; i < tam; i++) {
			if(A != B[i]) {
				if(B[i] == '0' && cont == 0)
                    continue;
				else {
					cout << B[i];
					cont++;
				}

			}
		}

		if(cont==0) cout << "0\n";
		  else cout << "\n";
	}
	
	return 0;
}
