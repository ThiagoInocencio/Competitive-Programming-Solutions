#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int N, M, i, cont_pairs;
    int ROBOT[100][3];
    char L;

    while(cin >> N) {

      cont_pairs = 0;
      for(i = 29; i < 61; i++) {
        ROBOT[i][0] = 0;
        ROBOT[i][1] = 0;
      }

      for(i = 0; i < N; i++) {
          cin >> M >> L;

          if(L == 'E') ROBOT[M][0]++;

          if(L == 'D') ROBOT[M][1]++;
      }

      for(i = 29; i < 61; i++) {
        if(ROBOT[i][0] == ROBOT[i][1])
            cont_pairs += ROBOT[i][0];
        else {
            if(ROBOT[i][0] > ROBOT[i][1])
                cont_pairs += ROBOT[i][1];
            else
                cont_pairs += ROBOT[i][0];
        }
      }

      cout << cont_pairs << "\n";

    }
    return 0;
}
