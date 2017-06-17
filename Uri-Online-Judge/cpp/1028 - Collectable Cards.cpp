#include <stdio.h>
#include <iostream>

using namespace std;

int N, F1, F2, x, dividendo, divisor;

int main() {

	cin >> N;

	while(N>0) {

		cin >> F1 >> F2;

		if(F1==F2) {
			cout << F1 << "\n";
			N--;
			continue;
		}

		if(F2>F1) {
			x = F2;
			F2 = F1;
			F1 = x;
		}

		dividendo = F1;
        divisor = F2;

		while(true) {

			if(dividendo%divisor==0) {
				cout << divisor << "\n";
				break;
			}

			x = divisor;
			divisor = dividendo%divisor;
			dividendo = x;
		}
		N--;
	}
	return 0;
}