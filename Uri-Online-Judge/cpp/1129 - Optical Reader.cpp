#include <stdio.h>
#include <iostream>

using namespace std;

int N;
int aswers[6];
int aswer;
int contAswer;

int main() {

    cin >> N;
	while(N != 0) {

		for(int i = 0 ; i < N; i++) {

			contAswer = 0;

            for(int k = 0; k < 5; k++)
              aswers[k] = 0;

			for(int j = 0; j < 5; j++) {
				cin >> aswer;

				if(aswer<=127) {
					aswers[j]++;
					contAswer++;
				}


			}

			if(contAswer>1) cout << "*\n";
			else {
               int h;
			   for(h=0; h < 5; h++)
			   	 if(aswers[h]==1) {
			   	 	switch(h) {
			   	 		case 0 : cout << "A\n"; break;
			   	 		case 1 : cout << "B\n"; break;
			   	 		case 2 : cout << "C\n"; break;
			   	 		case 3 : cout << "D\n"; break;
			   	 		case 4 : cout << "E\n"; break;
			   	 	}
			   	 	break;
			   	 }
               if(h==5) cout << "*\n";
			}

		}

        cin >> N;
	}
	return 0;
}
