#include <stdio.h>

int main(){

   double M[12][12], soma=0;
   int i ,j, L;
   char T;

   scanf(" %d %c" , &L , &T);;

   for(i=0;i<12;i++){
     for(j=0;j<12;j++){
        scanf(" %lf" , &M[i][j]);
        if(j==L){
            soma += M[i][j];
        }

     }
   }

   switch(T){
     case 'S' : printf("%0.1lf\n" , soma); break;
     case 'M' : printf("%0.1lf\n" , soma/12); break;

   }

return 0;
}