#include <iostream>
#include <string.h>
#include <stdio.h>

#define MAX 250000

using namespace std;

char A[250000], B[250000];
int T, cont=0, temp, tam, i;

int main() {


	cin >> T;

	while(T > 0) {
		cont=0;
		temp=0;

		cin >> A >> B;

		tam = strlen(A);

		if(strcmp(A,B)==0) {
             cout << "0\n";
             T--;
             continue;
		}
		else {
		   for(i=0; i < tam; i++) {

              if(tolower(A[i]) == tolower(B[i]))
                 temp = 0;
              else if(tolower(A[i]) > tolower(B[i])){
                 temp = ('z'-tolower(A[i]))+(tolower(B[i])-('a'-1));
              } else {
                 temp = tolower(A[i])-tolower(B[i]);
              }

			  temp = temp < 0 ? temp*-1 : temp;
			  cont += temp;
		  }
		}

		cout << cont << "\n";

		T--;
	}

	return 0;
}
