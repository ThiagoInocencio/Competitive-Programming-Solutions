#include <iostream>

using namespace std;

struct elementos
{
    int cont;
} elem[5000];

int N, i, j;

int main() {
    
	cin >> N;

	for(j = 0; j < 2500; j++)
        elem[j].cont = 0;

	while(N--) {

		cin >> i;
		elem[i].cont++;

	}

	for(j = 0; j < 2500; j++) {
        if(elem[j].cont > 0) {
            cout << j << " aparece " << elem[j].cont << " vez(es)" << endl;
        }
	}

	return 0;
}
