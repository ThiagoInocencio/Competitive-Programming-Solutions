#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char str[60];
int len, i, j, temp;

int main() {

	while(gets(str)) {

        len = strlen(str);
        temp = 0;

		for(i=0; i < len; i++){
		
			if(str[i] >= 'a' && str[i] <= 'z') {
				temp = str[i] + 13;
				if(temp > 'z') {
					temp = temp - 'z';
					temp = 'a' + temp-1;
				}
			} else if(str[i] >= 'A' && str[i] <= 'Z') {
				temp = str[i] + 13;
				if(temp > 'Z') {
					temp = temp - 'Z';
					temp = 'A' + temp-1;
				}
			} else
			   temp = str[i];

			printf("%c" , temp);

		}

		cout << "\n";
	
	}
	
	return 0;
}
