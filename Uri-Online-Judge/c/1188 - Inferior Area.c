#include <stdio.h>

int main(){

   double M[12][12], soma=0, cont_n=0;
   int i ,j, L;
   char T;

   scanf(" %c" , &T);

   for(i=0;i<12;i++){
     for(j=0;j<12;j++){
        scanf(" %lf" , &M[i][j]);
        if(j<6){
        if(j>11-i && i>6){
            soma += M[i][j];
            cont_n++;
        }
       } else if(j>5){
         if(j<i && i>6){
            soma += M[i][j];
            cont_n++;
        }
       }
     }
   }

   switch(T){
     case 'S' : printf("%0.1lf\n" , soma); break;
     case 'M' : printf("%0.1lf\n" , soma/cont_n); break;
   }

return 0;
}