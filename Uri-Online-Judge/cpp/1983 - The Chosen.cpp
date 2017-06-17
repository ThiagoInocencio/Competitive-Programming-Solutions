#include <iostream>
#include <stdio.h>

using namespace std;

int m, m_m, N;
double nota = 0.0, m_nota = 0.0;

int main() {

	cin >> N;

	while(N--) {


		cin >> m >> nota;

		if(nota > m_nota) {
			m_nota = nota;
			m_m = m;
		}
	}

	if(m_nota >= 8.0) cout << m_m << "\n";
	  else cout << "Minimum note not reached\n";


	return 0;
}
