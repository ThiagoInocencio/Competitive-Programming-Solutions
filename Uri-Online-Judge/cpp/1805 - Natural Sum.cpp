#include <stdio.h>

int main() {

	unsigned long long int a, b, sum=0;

	scanf("%llu %llu" , &a, &b);
	
	sum = ((a + b) * (b-a+1))/2;
	
	printf("%llu\n", sum);

	return 0;
}