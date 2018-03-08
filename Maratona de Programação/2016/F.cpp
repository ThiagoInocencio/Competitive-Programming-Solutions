#include <vector>
#include <queue>
#include <set>
#include <climits>
#include <iostream>

using namespace std;

class Node {

public:
    Node* esquerdo;
    Node* centro;

    Node() {
        esquerdo = NULL;
        centro = NULL;
    }

    ~Node() {
    }
};

typedef vector<Node > Tree;

int maior_centro_canhoto = -1;
int maior_centro_esquerdo_canhoto = -1;

int maior_centro_destro = -1;
int maior_centro_direito_destro = -1;


int visitaArvCanhota(Node * no, int pos_central) {

    if(no == NULL) return 0;

    int cont_no = 1;

    int count_esq = visitaArvCanhota(no->esquerdo, pos_central+1);

    cont_no += visitaArvCanhota(no->centro, pos_central);

    if(cont_no > maior_centro_esquerdo_canhoto && pos_central != 0) maior_centro_esquerdo_canhoto = cont_no;
    else
        maior_centro_canhoto = cont_no;

    return cont_no;

}

int visitaArvDestra(Node * no, int pos_central) {

    if(no == NULL) return 0;

    int cont_no = 1;

    int count_esq = visitaArvDestra(no->centro, pos_central+1);

    cont_no += visitaArvDestra(no->esquerdo, pos_central);

    if(cont_no > maior_centro_direito_destro && pos_central != 0) maior_centro_direito_destro = cont_no;
    else
        maior_centro_destro = cont_no;

    return cont_no;

}

int main() {

    int N, I, L, K, P, Q, R, M;
    int i;

    cin >> N;

    Tree canhota (N+1);

    for(i = 1; i <= N; i++) {

        cin >> I >> L >> K;

        if(L == 0)
          canhota[I].esquerdo = NULL;
        else {
           canhota[I].esquerdo = &canhota[L];
        }

        if(K == 0)
           canhota[I].centro = NULL;
        else {
            canhota[I].centro = &canhota[K];
        }
    }

    visitaArvCanhota(&canhota[1], 0);


    cin >> M;

    Tree destra (M+1);

    for(i = 1; i <= M; i++) {

        cin >> P >> Q >> R;

        // Nesse caso .esquerda = centro e .centro = direito

        if(R == 0)
          destra[P].centro = NULL;
        else {
          destra[P].centro = &destra[R];
        }

        if(Q == 0)
          destra[P].esquerdo = NULL;
        else {
          destra[P].esquerdo = &destra[Q];
        }
    }

    visitaArvDestra(&destra[1], 0);

    int menor_centro;

    int dif_1_4 = maior_centro_canhoto < maior_centro_direito_destro ? maior_centro_canhoto : maior_centro_direito_destro;
    int dif_1_3 = maior_centro_canhoto < maior_centro_destro ? maior_centro_canhoto : maior_centro_destro;
    int dif_2_3 = maior_centro_esquerdo_canhoto < maior_centro_destro ? maior_centro_esquerdo_canhoto : maior_centro_destro;

    if(dif_1_4 >= dif_1_3 && dif_1_4 >= dif_2_3) menor_centro = dif_1_4;
    else if(dif_1_3 >= dif_2_3) menor_centro = dif_1_3;
    else menor_centro = dif_2_3;

    cout << (N+M-menor_centro) << "\n";

    return 0;
}
