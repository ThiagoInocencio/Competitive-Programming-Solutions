#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

    int A, B, C, D, n, i, menor_num;

    cin >> A >> B >> C >> D;
    
    menor_num = C+1;

    for(i = 1; i <= sqrt(C); i ++) {
        if(i % A == 0 && i % B != 0 && C % i == 0 && D % i != 0)
            if(i < menor_num) menor_num = i;

        if((C/i) % A == 0 && (C/i) % B != 0 && C % (C/i) == 0 && D % (C/i) != 0) 
            if((C/i) < menor_num) menor_num = (C/i);
    }

    if(menor_num < C+1)
    cout << menor_num << "\n";
    else
    cout << "-1\n";

    return 0;
}