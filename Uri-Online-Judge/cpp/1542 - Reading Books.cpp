#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

double Q, D, P;
double result;

int main() {

    while(cin >> Q, Q != 0) {
        cin >> D >> P;

        result = trunc((-D)/((1/P)-(1/Q)));

        if(result == 1) printf("1 pagina\n");
            else printf("%.0lf paginas\n" , result);
    }
    
	return 0;
}
