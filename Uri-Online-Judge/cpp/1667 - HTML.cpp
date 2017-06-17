#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {

    vector<string> html;
    string word;
    int currentSize = 0;

    while(cin >> word) html.push_back(word);

    for(vector<string>::iterator it = html.begin(); it != html.end(); ++it) {
        int stringSize = ((string) *it).length();

        if(((string) *it).compare("<hr>") == 0) {

            if(currentSize != 0)
            cout << "\n";

            for(int i = 0; i < 80; i++)
                cout << "-";

            cout << "\n";

            currentSize = 0;
        }
        else if(((string) *it).compare("<br>") == 0) {

            cout << "\n";

            currentSize = 0;

        } else {

            if(currentSize == 0 && (stringSize) <= 80) {
                cout << *it;
                currentSize += stringSize;
            }
            else if(currentSize + (stringSize + 1) > 80) {
                cout << "\n" << *it;
                currentSize = stringSize;
            } else if(currentSize == 0){
                cout << *it;
                currentSize = stringSize;
            } else {
                cout << " " << *it;
                currentSize = currentSize + (stringSize + 1);
            }
        }

    }

    cout << "\n";

    return 0;

}
