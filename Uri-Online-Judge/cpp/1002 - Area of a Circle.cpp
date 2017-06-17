#include <iostream>
#include <stdio.h>
#define PI 3.14159

using namespace std;

double R;

int main()
{
	cin >> R;

    printf("A=%0.4lf\n" , (R*R)*PI );

    return 0;
}
