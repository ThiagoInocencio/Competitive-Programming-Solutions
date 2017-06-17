#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char nomes[200][50], temp[50];
int N, K, i;

int main() {

	cin >> N >> K;

	for(int i = 0; i < N; i++) {
		cin >> nomes[i];
	}

	for(int i = 0; i < N-1; i++) {
		for(int j = i + 1; j < N; j++) {
			if(strcmp(nomes[i],nomes[j])>0) {
				strcpy(temp, nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],temp);
			}
		}
	}

	cout << nomes[K-1]; 

	return 0;
}
