#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int K, N, M, X, Y, i;

    while(cin >> K, K != 0) {

        cin >> N >> M;

        for(i = 0; i < K; i++) {
            cin >> X >> Y;

            if(X > N && Y > M)
                printf("NE\n");
            else if(X > N && Y < M)
                printf("SE\n");
            else if(X < N && Y > M)
                printf("NO\n");
            else if(X < N && Y < M)
                printf("SO\n");
            else
                printf("divisa\n");

        }

    }
    return 0;
}
