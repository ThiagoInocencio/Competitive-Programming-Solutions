#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int N, flag = 0, tam, i;
char str[60];

int main() {


	scanf("%d" , &N);
	getchar();


	while(N--) {

        gets(str);
		tam = strlen(str);

		flag = 1;

		for(i=0; i<tam; i++) {

			if(str[i] >= 'a' && str[i] <= 'z' && flag==1) {
				cout << str[i];
				flag = 0;
			} else if(str[i] == ' '){
				flag = 1;
			}

		}

		cout << "\n";
	}

	return 0;
}
