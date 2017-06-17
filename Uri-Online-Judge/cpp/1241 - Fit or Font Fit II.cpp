#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 1500

using namespace std;

char A[MAX], B[MAX];
int tamA, tamB, i, N, j;

int main() {

    cin >> N;

    while(N > 0) {

    	cin >> A >> B;

    	tamA = strlen(A)-1;
    	tamB = strlen(B)-1;

    	if(strcmp(A,B)==0)
    		cout << "encaixa\n";
    	else if(tamB>tamA)
    		cout << "nao encaixa\n";
    	else {

    		j = tamA;
    		for(i = tamB; i >= 0; i--) {
    			if(A[j]==B[i]) {
 					j--;
    				continue;
    			}
    			else
    			    break;
    		}

    		if(i==-1) cout << "encaixa\n";
    		   else cout << "nao encaixa\n";
    	}
        
    	N--;
    }

	return 0;
}
