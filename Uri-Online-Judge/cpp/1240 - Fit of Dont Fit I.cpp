#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int N, A, B, i, tamA, tamB, k;
char strA[60], strB[60];

int main() {

	cin >> N;

	while(N > 0) {

		cin >> A >> B;

		if(A==B) {
			cout << "encaixa\n";
			N--;
			continue;
		} else if (B > A) {
		    cout << "nao encaixa\n";
			N--;
			continue;
		}


		sprintf(strA, "%d" , A);
		sprintf(strB, "%d" , B);
		tamA = strlen(strA);
		tamB = strlen(strB);


		k = strlen(strB);


		for(i = 0; i <= k; i++) {
			if(strA[tamA]==strB[tamB]) {
				tamA--;
				tamB--;
				continue;
			}
			else
              break;
		}

		if(i>k) cout << "encaixa\n";
		  else cout << "nao encaixa\n";


		N--;
	}

	return 0;
}
