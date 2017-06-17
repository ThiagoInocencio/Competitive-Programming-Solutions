#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {


    string QWERT = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int i, index, length;
    char LETTER;
    string text;


    while(getline(cin, text)) {

        length = text.length();

        for(i = 0; i < length; i++){
            LETTER = text[i];

            if(LETTER == ' ') {
                    cout << " ";
            }
            else{
                index = QWERT.find(LETTER);
                cout << QWERT[index-1];
            }
        }

        cout << "\n";

    }

    return 0;
}
