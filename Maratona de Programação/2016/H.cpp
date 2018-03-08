#include <iostream>
#include <set>

using namespace std;

int main() {

    string risada;
    int i = 0, j = 0;

    cin >> risada;

    j = risada.length() - 1;

    set<char> vog;

    vog.insert('a');
    vog.insert('e');
    vog.insert('i');
    vog.insert('o');
    vog.insert('u');

    while(i < j) {

        while(!vog.count(risada[i]))
          i++;

        while(!vog.count(risada[j]))
          j--;

        if(risada[i] == risada[j]) {
	  i++;
          j--;
	} else {
	  cout << "N\n";
          return 0;        
	}

    }

    cout << "S\n";

    return 0;
}

