#include <iostream>


using namespace std;

int V[75][75], N, j, i;


int main() {


	while(cin >> N) {


		for(i = 0; i < N; i++) {
			for(j = 0; j < N; j++) {
				if(i==j) V[i][j] = 1;
				  else V[i][j] = 3; 
			}
		}

		for(i = N-1, j = 0; i >= 0; i--) {
			V[i][j] = 2;
			j++;
		}


	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			cout << V[i][j];
		}
		cout << "\n";
	}
			
	}

	return 0;
}