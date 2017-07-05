#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

char mat[110][100];

    int i, j, L, C;
    int lAtuH = 0, cAtuH;
    int lFinH = 0, cFinH;

void achaCaminhoH(int posL, int posC) {
     
    
     
    if(posL < 0 || posL >= L) return;
    if(posC < 0 || posC >= C) return; 
     
    char valuePos = mat[posL][posC];
     
    if(valuePos != 'o' && valuePos != 'H')
      return;
      
    
    lFinH = posL;
    cFinH = posC;
    
    mat[posL][posC] = '.';
    
    achaCaminhoH(posL+1, posC);
    achaCaminhoH(posL, posC+1);
    achaCaminhoH(posL-1, posC);
    achaCaminhoH(posL, posC-1);
     
}

int main(int argc, char *argv[])
{
    
    cin >> L >> C;
    char str[110];
    
    for(i = 0; i < L; i++) {
      cin >> str;
      int k = 0;
      int tam = strlen(str);
      for(k = 0; k < tam; k++) {
         mat[i][k] = str[k];
         
         if(mat[i][k] == 'o' ){
             lAtuH = i;
             cAtuH = k;
         }
      }
   }
   
   achaCaminhoH(lAtuH, cAtuH);
   
   cout << (lFinH + 1) << " " << (cFinH + 1) << endl;
   
   return 0;
}
