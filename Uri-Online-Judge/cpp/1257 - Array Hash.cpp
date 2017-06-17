#include <iostream>
#include <string.h>

using namespace std;

int N, pont, i, j, L, tam;
char str[100];

int main() {

	cin >> N;

	while(N--) {

		cin >> L;

		pont=0;

		for(j=0; j<L ;j ++) {

			cin >> str;
			tam = strlen(str);
			for(i=0; i < tam; i++) {
				pont = pont + (str[i] - 'A') + j + (i);
			}
		}

		cout << pont << "\n";

	}
  
	return 0;
}
