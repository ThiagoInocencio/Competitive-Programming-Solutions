#include <stdio.h>
#include <iostream>

using namespace std;

int p, qtd, product;
float purcAmount = 0.0;

int main() {

	cin >> p;

	while(p > 0) {

		cin >> product >> qtd;

		switch(product) {
			case 1001 : purcAmount = purcAmount + (1.50*qtd); break;
			case 1002 : purcAmount = purcAmount + (2.50*qtd); break;
			case 1003 : purcAmount = purcAmount + (3.50*qtd); break;
			case 1004 : purcAmount = purcAmount + (4.50*qtd); break;
			case 1005 : purcAmount = purcAmount + (5.50*qtd); break;
		}

		p--;
	}

	printf("%.2f\n" , purcAmount);

	return 0;
}