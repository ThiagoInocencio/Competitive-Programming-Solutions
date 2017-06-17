#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int N , tam, i, des;
char str[150];

int main() {


	cin >> N;

	while(N>0) {

		cin >> str;
		cin >> des;
		tam = strlen(str);

		for(i=0; i < tam; i++) {

			if(str[i]-des < 65) {
				str[i] = ('Z'+1) - (des-(str[i]-65));
			} else
			    str[i] = str[i]-des;

		}


        printf("%s\n" , str);

		N--;
	}

	return 0;
}
