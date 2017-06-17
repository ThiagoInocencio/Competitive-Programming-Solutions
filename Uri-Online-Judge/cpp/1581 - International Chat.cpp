#include <iostream>
#include <string.h>

using namespace std;

int N , K;
char idio[30], last[30], esco[30];

int main() {

	cin >> N;

	while(N--) {

		cin >> K;
		strcpy(last, "null");
		strcpy(esco,"none");

		while(K--) {

			cin >> idio;

			if(strcmp(idio,last)!=0 && strcmp(last,"null")!=0){
				strcpy(esco,"ingles");
			}
			else {
				strcpy(last,idio);
			}
		}

		if(strcmp(esco,"none")==0){
			strcpy(esco,idio);
		}

		cout << esco << "\n";

	}

	return 0;
}
