#include <stdio.h>
#include <iostream>

using namespace std;

int cont = 0;
double average = 0.00, x = 0.00;
string nome;

int main() {

	while(getline(cin, nome)) {
        cin >> x;
		cont++;
		average += x;
        cin.ignore();
	}

	printf("%0.1lf\n" , average/cont);


	return 0;
}
