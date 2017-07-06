#include <iostream>

using namespace std;

int main() {

   int N, D, A;

   cin >> N >> D >> A;

   if(A <= D) cout << (D - A);
     else cout << ((N - A) + D);

    cout << "\n";


return 0;

}