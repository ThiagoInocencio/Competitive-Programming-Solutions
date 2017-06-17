#include <iostream>
#include <stdio.h>

using namespace std;

double a, b, perc, dif;

int main() {

	cin >> a >> b;

	dif = b - a;

	printf("%0.2lf%%\n" , (100*dif)/a);

	return 0;
}
