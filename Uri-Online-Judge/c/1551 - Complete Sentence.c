#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1500

void limpar(int alpha[]){

    int j=97,i;
      for(i=0; i<26; i++) {
      alpha[j] = 0;
      j++;
    }

}



int main(){

  int j=97,i, alpha[200], N, tam, cont=0;
  char frase[MAX];


  scanf(" %d", &N);
  while(N>0){
    limpar(alpha);
    cont = 0;

    getchar();
    gets(frase);
    tam = strlen(frase);

    for(i=0;i<tam;i++){
       if((alpha[frase[i]]==0) && (frase[i]>=97) && (frase[i]<=122)){
                cont++;
                alpha[frase[i]]++;
       }

    }

    if(cont==26) printf("frase completa\n");
    else if(cont>=13) printf("frase quase completa\n");
     else printf("frase mal elaborada\n");


    N--;
  }


  return 0;
}