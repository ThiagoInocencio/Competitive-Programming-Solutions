#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;


char str[333333], temp;
int N, tam, mid, i, j;


int main() {

	cin >> N;
	cin.ignore();

	while(N>0) {

		gets(str);

		tam = strlen(str);

		for(i = 0; i < tam; i++) {
             if((str[i] >= 65 && str[i] <= 90 ) || (str[i] >= 97 && str[i] <= 122))
                      str[i] = str[i] + 3;
		}

		j = tam-1;
		for(i = 0; i < tam/2; i++) {
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			j--;
		}

        mid = trunc(tam/2);

		for(i=mid; i < tam; i++)
			str[i] = str[i]-1;


		for(i=0;i<tam;i++)
			cout << str[i];

		cout << "\n";

		N--;
	}


	return 0;
}
