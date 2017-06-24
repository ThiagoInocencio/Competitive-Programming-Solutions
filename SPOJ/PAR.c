// 2015-05-17 02:16:03

#include <stdio.h>
#include <string.h>

#define MAX 10000

int main()
{

    char nomes[MAX][11], nomeA[11], nomeB[11];
    int jog=-1, i, A, B, N, j, cont_nom=0;

    scanf(" %d", &N);
    do{
    jog++;

    i=0;

    scanf(" %s" , nomeA);
    scanf(" %s" , nomeB);

    while(i<N){

       scanf(" %d %d", &A, &B);
       if((A+B)%2==0)
        {
            strcpy(nomes[cont_nom], nomeA);
            cont_nom++;
        } else {
            strcpy(nomes[cont_nom], nomeB);
            cont_nom++;
        }

       i++;
     }

     strcpy(nomes[cont_nom], "empty");
     cont_nom++;

    scanf(" %d" , &N);
    } while(N!=0);

    strcpy(nomes[cont_nom], "end");

    i=0;
    j=0;
    while(strcmp(nomes[i],"end") != 0){

       printf("\nTeste %d\n" , j+1);
       while(strcmp(nomes[i],"empty") != 0){
          printf("%s\n" , nomes[i]);
          i++;
       } j++;
     i++;
   }

return 0;
}