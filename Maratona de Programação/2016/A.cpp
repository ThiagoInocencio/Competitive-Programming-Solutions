#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;

int main() {
	    cin >> A >> B >> C;

if ( (A == B) || (A == C) || (B == C)) {
	cout << "S" << endl;
	return 0;
} 

else if ((A + B == C) || (A + C == B) || (C + B == A)){
	cout << "S" << endl;
	return 0;
} 

else {
	cout << "N" << endl;
	return 0;
}

return 0;
}