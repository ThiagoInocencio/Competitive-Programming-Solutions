#include <iostream>

using namespace std;

int main() {
    unsigned long int v1, v2, v3;

    while(cin >> v1 >> v2){

         v3 = v1 ^ v2;

         cout << v3 << "\n";
    }

return 0;
}