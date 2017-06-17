#include <stdio.h>
#define MAX 1500

int main(){

    char dir[MAX];
    int N, i, df=0;

    scanf(" %d" , &N);
    while(N!=0){
      df=0;
      scanf(" %s" , dir);

      for(i=0;i<N;i++){
         switch(dir[i]){
            case 'D' : df++; break;
            case 'E' : df--; break;
         }

        if(df>3) df = 0;
         else if(df<0) df = 3;
      }

      switch(df){
        case 0 : printf("N\n"); break;
        case 1 : printf("L\n"); break;
        case 2 : printf("S\n"); break;
        case 3 : printf("O\n"); break;
      }

      scanf(" %d" , &N);
    }

	return 0;
}