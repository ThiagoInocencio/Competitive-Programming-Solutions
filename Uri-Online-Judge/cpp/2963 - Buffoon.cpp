 #include <iostream>

using namespace std;

int N;

int v[10000];

int main () {


    cin >> N;

    for(int i = 0; i < N; i++) {
         cin >> v[i];
         if(i > 0) {
             if(v[i] > v[0]) {
                 cout << "N\n";
                 return 0;
             }
         }
    }

    cout << "S\n";

    return 0;

}

