#include <string.h>
#include <stdio.h>
#include <iostream>
#include <climits>
#include <Queue>
#include <vector>
#include <set>

using namespace std;

typedef pair<int, int> arestas;
typedef vector<vector<arestas> > Cidades;

void menorCaminho(Cidades &cidades, int s, vector<int> &menorCa, vector<int> &predecesor) {
    int n = cidades.size();
    menorCa.assign(n, INT_MAX);
    menorCa[s] = 0;
    predecesor.assign(n, -1);
    priority_queue<arestas, vector<arestas> , greater<arestas> > minQ;
    minQ.push(make_pair(menorCa[s], s));

    while (!minQ.empty()) {
        int d = minQ.top().first;
        int cidade = minQ.top().second;
        minQ.pop();
        if (d != menorCa[cidade])
            continue;
        for (int i = 0; i < (int) cidades[cidade].size(); i++) {
            int v = cidades[cidade][i].first;
            int nmenorCa = menorCa[cidade] + cidades[cidade][i].second;
            if (menorCa[v] > nmenorCa) {
                menorCa[v] = nmenorCa;
                predecesor[v] = cidade;
                minQ.push(make_pair(nmenorCa, v));
            }
        }
    }
}

int main() {
    
    int N, M, A, B, C;
    
    cin >> N >> M;
    
    Cidades cidades(N+1);
    
    for(int i = 0; i < M; i++) {
       cin >> A >> B >> C;
       
       cidades[A].push_back(make_pair(B, C));  
       cidades[B].push_back(make_pair(A, C));  
    }
    
    vector<int> menorCa;
    vector<int> predecesor;
    menorCaminho(cidades, 1, menorCa, predecesor);
    
    cout << menorCa[N] << "\n";
    
    return 0;
}
