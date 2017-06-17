#include <iostream>
#include <string.h>

using namespace std;

char str1[60]  , str2[60];
int tam1, tam2, i, j ,k ,N ;

int main() {

	cin >> N;

	while(N > 0) {

		cin >> str1 >> str2;
		tam1 = strlen(str1);
		tam2 = strlen(str2);

		i=0;
		j=0;


		while(true) {
			if(i<tam1) {
				cout << str1[i];
				i++;
			}
			if(j<tam2) {
				cout << str2[j];
				j++;
			}

			if(i >= tam1 && j >= tam2) break;
		}

		cout << "\n";

		N--;
	}
	return 0;
}
