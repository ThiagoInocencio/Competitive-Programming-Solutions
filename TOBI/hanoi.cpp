#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    int test[100000];
    int cont_test = 1;
    int i, N;

    while(cin >> N, N != 0) {
        test[cont_test] = pow(2, N) - 1;
        cont_test++;
    }

    for(i = 1; i < cont_test; i++) {
        printf("Teste %d\n" , i);
        printf("%d\n" , test[i]);
        printf("\n");
    }

    return 0;
}
