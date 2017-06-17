#include <stdio.h>

using namespace std;

int main() {

	int n[5] = {0, 0, 0, 0, 0};
	int i=0, typeTea, correct=0, x;

	scanf("%d" , &typeTea);

	while(i<5) {
		scanf("%d" , &x);
		if(x==typeTea) correct++;
		i++;
	}
	
	printf("%d\n" , correct);

	return 0;
}