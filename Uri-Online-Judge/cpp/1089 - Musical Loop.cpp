#include <iostream>

using namespace std;

int main() {
	
	int ant = 0, atual = 0, contPeaks=0, up = 0, N=0, i=0, numero[500000];
	
	
	while(cin >> N , N != 0) {
		
		
		up = 0;
		contPeaks = 0;
		ant = 0;
		
		
		for(i = 0; i < N; i++) {
			
			cin >> numero[i];
			
			if(i == 0) {
				ant = numero[i];
			}else if(numero[i] > ant && up != 1) {
				up = 1;
				ant = numero[i];
				contPeaks++;
			} else if(numero[i] < ant && up != -1) {
				up = -1;
				ant = numero[i];
				contPeaks++;
			} else	ant = numero[i];
			
		}
		
		if(numero[0] > ant && numero[0] > numero[1] && up != 1)
		   contPeaks++;
		else if(numero[0] < ant && numero[0] < numero[1] && up != -1)
		   contPeaks++;
		   
		 cout << contPeaks << "\n";  
	}
	return 0;
}