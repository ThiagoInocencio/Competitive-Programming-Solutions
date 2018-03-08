#include <iostream>
#include <algorithm>

#define MAX 250

using namespace std;

    int i, j;
    
    int H, L;
    int ladrilho[MAX][MAX];

    int cor_atual, area_atual, min_area;

void find_area(int i, int j, int H, int L) {

    if(!(i >= 0 && i < H && j >= 0 && j < L))
        return;

    if(ladrilho[i][j] == cor_atual) {
        area_atual++;  
        ladrilho[i][j] = -1;
    }
    else 
        return;
    
    find_area(i-1, j, H, L);
    find_area(i, j+1, H, L);
    find_area(i+1, j, H, L);
    find_area(i, j-1, H, L);
    
    return;
}

int main() {

    min_area = 40001;

    cin >> H >> L;

    for(i = 0; i < H; i++) {
        for(j = 0; j < L; j++) {
	  cin >> ladrilho[i][j];
        }
    }

    for(i = 0; i < H; i++)
      for(j = 0; j < L; j++) {

          if(ladrilho[i][j] != -1) {
            area_atual = 0;
            cor_atual = ladrilho[i][j];
            find_area(i, j, H, L);
          }

          if(area_atual < min_area) min_area = area_atual;  
      }

      cout << min_area << "\n";
         

    return 0;
}