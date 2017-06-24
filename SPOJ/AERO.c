// 2015-05-17 06:18:38 

#include <stdio.h>
#include <string.h>
#define MAX 10000

int main()
{
   int maior, i, j, X, Y,vrs[MAX],resu[MAX], A,V, cont_r=0;

   scanf(" %d %d" , &A, &V);
   do{
    j++;

    i=0;
    while(i<=A){
        vrs[i] = 0;
        i++;
    }

    i=0;
    while(i<V){
        scanf(" %d %d" , &X, &Y);
        vrs[X]++;
        vrs[Y]++;
        i++;
    }

   i=0;
   maior=0;
   while(i<=A){
     if(vrs[i]>maior){
        maior = vrs[i];
     }
     i++;
   }

   i=0;
   while(i<=A){
      if(vrs[i]>=maior){
        resu[cont_r] = i;
        cont_r++;
      }
      i++;
   }

   resu[cont_r] = -1;
   cont_r++;

   scanf(" %d %d" , &A, &V);
   } while((A != 0) && (V != 0));

   resu[cont_r] = -2;

   i=0;
   j=0;

   while(resu[i] != -2){
      j++;
      printf("\nTeste %d\n", j);
        while(resu[i] != -1){
            printf("%d ", resu[i]);
            i++;
        }
      i++;
     printf("\n");
   }

return 0;
}
