// 2015-05-19 00:58:35 

#include <stdio.h>
#include <ctype.h>
#define MAX 1010

int main()
{

    int i=0,tam, N, M, A, K, contM=0, contA=0, contK=0;
    char senha[MAX];

    scanf(" %d %d %d %d " , &N, &M, &A, &K);


    gets(senha);

    tam = strlen(senha);

    if(tam>=N){
      while(i<tam){
        if(isdigit(senha[i])) contK++;
        else if(islower(senha[i])) contM++;
        else if(isupper(senha[i])) contA++;
        i++;
      }
    }

    contK >= K && contM >= M && contA >= A ? printf("Ok =/") : printf("Ufa :)");

    return 0;
}