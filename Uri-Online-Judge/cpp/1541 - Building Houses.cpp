#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int x=0, y=0, perc=0;

int main() {

	while(cin >> x, x != 0) {
		cin >> y >> perc;

	 	printf("%.0lf\n" , trunc(sqrt(((x*y)*100)/perc)));


	}

	return 0;
}
