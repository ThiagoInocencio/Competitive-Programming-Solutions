#include <stdio.h>
#include <iostream>

using namespace std;


int tickets[15555], N,  M, T, i, cont;

int main() {


	while(cin >> N >> M , N != 0 && M != 0) {


		cont = 0;

		for(int i = 0; i < 15555; i++)
			tickets[i] = 0;

		while(M>0) {
			cin >> T;
			tickets[T]++;
			if(tickets[T]==2) cont++;
			M--;
		}

		cout << cont << "\n";

	}
	return 0;
}
