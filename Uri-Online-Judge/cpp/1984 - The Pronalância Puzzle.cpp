#include <iostream>
#include <string.h>

using namespace std;

char str[200];
int tam;

int main() {

	cin >> str;
	tam = strlen(str);

	for(int i = tam-1; i >= 0; i--)
		cout << str[i];

	cout << "\n";

}