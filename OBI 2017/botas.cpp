#include <iostream>

using namespace std;

typedef struct {
     int D;
     int E;
     int cont_pares;
} Bota;

Bota bota[100000];


int main()
{

    int N, M, cont_pares = 0, i;
    char L;

    cin >> N;

    for(i = 0; i < N; i++) {
        bota[i].D = 0;
        bota[i].E = 0;
        bota[i].cont_pares = 0;
    }

    for(i = 0; i < N; i++) {
        cin >> M >> L;

        if(L == 'D') {
            bota[M].D++;
        }

        if(L == 'E') {
            bota[M].E++;
        }

        if(bota[M].E >= 1 && bota[M].D >= 1) {
            cont_pares++;
            bota[M].E--;
            bota[M].D--;
        }


    }

    cout << cont_pares << "\n";

    return 0;
}
