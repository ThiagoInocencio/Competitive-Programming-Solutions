#include <iostream>
#include <math.h>

using namespace std;

double XTP, i, y, flag=0;

int main() {

	while(cin >> XTP) {
	
		flag = 0;
		
		if(XTP==0) flag = 1;

		for(i=0; i < sqrt(XTP); i++) {
			
			y = trunc(sqrt(XTP-(i*i)));

			if(XTP == (y*y + i*i) ){
				flag = 1;
				break;
			}
	
		}

		if(flag) cout << "YES\n";
		  else cout << "NO\n";
		  
    }

	return 0;
}
