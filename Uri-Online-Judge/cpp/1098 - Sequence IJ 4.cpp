#include <iostream>

using namespace std;

int i=0, j=0, k=1, m=0;

int main() {

	while(i<=2) {

		m++;
		j=0;
		while(j<10) {

			for(int w=m;w<m+3;w++)
				if(j==0)
					cout << "I=" << i << " J=" << w << "\n";
	   			else
	    			cout << "I=" << i << "." << j << " J=" << w << "." << j << "\n";

	    	if(i==2) break;
		    j += 2;
		}

		i++;
	}

	return 0;
}
