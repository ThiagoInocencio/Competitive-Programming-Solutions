#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int N=0, tam=0, mid=0, i;
char str[200];

int main() {

	cin >> N;
	cin.ignore();

	while(N > 0) {

		gets(str);

		tam = strlen(str)-1;

		if(strlen(str)%2==0) mid = tam/2;
		   else mid = (tam-1)/2;

		for(i=mid; i>=0; i--)
            cout << str[i];

        for(i=tam; i>mid;i--)
           cout << str[i];

        cout << "\n";

		N--;
	}

	return 0;
}
