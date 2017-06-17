#include <stdio.h>
#include <iostream>

using namespace std;

int N, T;

int main() {

	cin >> N;

	while(N>0) {

		cin >> T;

		if(T>=2015) cout << T-2015+1 << " A.C.\n";
		  else cout << 2015-T << " D.C.\n";

		N--;
	}

	return 0;
}