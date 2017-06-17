#include <stdio.h>

using namespace std;

int main() {

	int A, B;

	scanf("%d %d" , &A, &B);

	if(A==B) printf("%d\n" , A);
	else if(A>B) printf("%d\n", A);
	else if(B>A) printf("%d\n", B);

	return 0;
}