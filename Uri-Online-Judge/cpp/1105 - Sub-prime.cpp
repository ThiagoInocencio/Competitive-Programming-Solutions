#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int RESERVES[30];
    int B, N, D, C, V, i, bailout = 0;

    while(cin >> B >> N, B != 0) {

        bailout = 0;

        for(i = 1; i <= B; i++)
            cin >> RESERVES[i];

        for(i = 1; i <= N; i++) {
           cin >> D >> C >> V;

           RESERVES[D] -= V;
           RESERVES[C] += V;
        }

        for(i = 1; i <= B; i++) {
            if(RESERVES[i] < 0) {
                bailout = 1;
                break;
            }
        }

        if(bailout) cout << "N\n";
           else cout << "S\n";
    }
    return 0;
}